#include <iostream>

#include "GraphDatabase.hpp"
#include "GraphStatistics.hpp"
#include "GraphFileOperations.hpp"

#include <Eigen/Dense>



using namespace std;
using namespace floorplan;



class graphNavigation{
public:
	graphNavigation();
	friend std::ostream& operator<<(std::ostream& os, graphNavigation& Graph);

	double optimal_average_info;
	double euler_average_info;
	double current_average_info;


	std::vector<int> path;

	void Navigate(void);
	// Set variables
	void set_information_index(double value){information_index=value;};
	void set_starting_vertex(double value){starting_vertex=value;};	
	void set_edges_vector(std::vector<std::set<int> > value);
	
	
	//Get Variables
	
	
	//Calculations
	void calc_optimal_average_info(void);
	void calc_euler_average_info(void);
	void calc_current_average_info(void);



private:
	double information_index;
	std::vector< std::set<int> > edges_vector;
	std::map<int, std::set<int> > connection_list;
	int number_of_vertices;

	int starting_vertex;
	
	Eigen::MatrixXd Laplacian_Euler;
//	Eigen::Matrix< complex<double>, 1, Eigen::Dynamic>   Laplacian_Euler_eigenvalues;
	Eigen::VectorXd   Laplacian_Euler_eigenvalues;
	
	void edge_list2conection_list(void);
};


