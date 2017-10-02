#include <iostream>

#include "GraphDatabase.hpp"
#include "GraphStatistics.hpp"
#include "GraphFileOperations.hpp"
#include "graphNavigation.hpp"

#include <Eigen/Dense>


graphNavigation::graphNavigation(){
	
	starting_vertex=0;
	
	optimal_average_info = -1;
	euler_average_info   = -1;
	current_average_info = -1;
	
	information_index = -1; // determinant by default
	
	number_of_vertices=-1;
}


///////////////////////
std::ostream& operator<<(std::ostream& os, graphNavigation& Graph){
	os << "\n";
	
	os << "Number of Nodes "<< Graph.number_of_vertices << "\n";
	os << "Number of Edges "<< Graph.edges_vector.size() << "\n";

	os << "Adjacency List \n";	
	for(std::map<int, std::set<int> >::iterator map_iter = Graph.connection_list.begin();map_iter != Graph.connection_list.end(); map_iter++){
		int name = map_iter->first;
		os << name <<": " ;
		
		std::set<int> nodes_connected = map_iter->second;
		for(std::set<int>::iterator set_iter = nodes_connected.begin(); set_iter != nodes_connected.end(); set_iter++   ){
			os << *set_iter <<" " ;
		}
		os << "\n";
	}
//	os << "Laplacian Euler \n" << Graph.Laplacian_Euler << "\n";		
	
	
    return os;
}



void graphNavigation::set_edges_vector(std::vector<std::set<int> > value){
	edges_vector = value; 
	edge_list2conection_list();
	calc_euler_average_info();
}






void graphNavigation::edge_list2conection_list(void){
	for(int i=0; i<edges_vector.size();i++){
		std::set<int> current_edge = edges_vector[i];
		int first = *current_edge.begin();
		int second = *current_edge.rbegin();
		
		connection_list[first].insert(second);
		connection_list[second].insert(first);
		
	}
	number_of_vertices = connection_list.size();
}





void graphNavigation::calc_euler_average_info(void){
	int a=1;
	
	Laplacian_Euler = Eigen::MatrixXd::Zero(number_of_vertices,number_of_vertices);
	
	for(int i=0;i <edges_vector.size();i++){
		Eigen::MatrixXd Edge_Matrix  = Eigen::MatrixXd::Zero(number_of_vertices,number_of_vertices);
		int first = *(edges_vector[i].begin() );
		int second = *(edges_vector[i].rbegin() );
		
		Edge_Matrix(first,first)=1;
		Edge_Matrix(second,second)=1;
		Edge_Matrix(first,second)=-1;
		Edge_Matrix(second,first)=-1;
		
		Laplacian_Euler = Laplacian_Euler + Edge_Matrix;		
	}
	Laplacian_Euler_eigenvalues = (Laplacian_Euler.eigenvalues() ).real();
//	Laplacian_Euler_eigenvalues = (Laplacian_Euler.eigenvalues() ).cwiseAbs();
	

	std::sort(Laplacian_Euler_eigenvalues.data(),Laplacian_Euler_eigenvalues.data()+Laplacian_Euler_eigenvalues.size());
	
	cout << "Eigen Values \n"<< Laplacian_Euler_eigenvalues << endl;
	cout << "Algebraic Connectivity "<< Laplacian_Euler_eigenvalues(1) << endl;
	
	if(Laplacian_Euler_eigenvalues(1) < 1e-10){
		cout << "Graph is not Connected!!! " << endl;
	}
	
}




