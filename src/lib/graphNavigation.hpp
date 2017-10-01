#include <iostream>

#include "GraphDatabase.hpp"
#include "GraphStatistics.hpp"
#include "GraphFileOperations.hpp"

//#include <Eigen/Dense>

#define value -1;

using namespace std;
using namespace floorplan;



int function_out(void){
	int a=1;
	return a;
}

std::vector< std::set<int> > edge_list2conection_list( std::vector<std::set<int> > edge_vector){
	int a=0;
	
	std::vector< std::set<int> > connection_list;
	
	return connection_list;
}

std::vector<int> Graph_Navigation(std::vector< std::set<int> > edge_vector_in, int starting_vertex);

double optimal_average_info(std::vector<std::set<int> > edge_vector);

double euler_average_info(std::vector<std::set<int> > edge_vector);

double current_average_info(std::vector<std::set<int> > edge_vector);
