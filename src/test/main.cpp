#include <iostream>

#include "GraphDatabase.hpp"
#include "GraphStatistics.hpp"
#include "GraphFileOperations.hpp"
#include "graphNavigation.hpp"

using namespace std;
using namespace floorplan;

int main(){
 GraphDatabase D;



 // Use "floor" for the KTH dataset
 // and "MITquest" for the MIT dataset
 // Load the KTH dataset 
// D.loadGraphs("/home/unizar/Downloads/KTH_CampusValhallavagen_Floorplan_Dataset_RAW", "floor");
 D.loadGraphs("/home/leonardo/Downloads/KTH_CampusValhallavagen_Floorplan_Dataset_RAW", "floor");
 
 // Load the MIT dataset
// D.loadGraphs("/home/unizar/Downloads/MIT_Dataset/projects.csail.mit.edu/stata/floorplans", "MITquest");


// D.loadGraphs("maps.csail.mit.edu", "MITquest");

  ofstream myfile;
  myfile.open ("Incidences.m");
//  myfile << "Writing this other thing to a file.\n";





 D.Init();

   
   
   		    cout << "Graphs Loaded: "<< D._graphs.size() << " ! "<< endl << endl;

//*
   for (unsigned int i=0; i < D._graphs.size(); i++){
//   for (unsigned int i=0; i < 5; i++){
        int a=1;
        
        std::set<std::string> edge_Set;
        std::map<std::string, int> id_map;
		std::vector<std::set<int> > edge_vectors;

        
        int counter=0;
        
        
		BGL_FORALL_EDGES(e, D._graphs[i], floorplanGraph){
			Vertex sourceVertex = boost::source(e, D._graphs[i]);
			Vertex targetVertex = boost::target(e, D._graphs[i]);
			
			std::string source_id = D._graphs[i][sourceVertex].vertex_id;
			std::string target_id = D._graphs[i][targetVertex].vertex_id;
			
			std::map<std::string, int>::iterator map_iter; 
			
			/////////////////////////////////////// 
			map_iter = id_map.find(source_id);

			if(map_iter == id_map.end() ){//empty
				id_map[source_id]=counter;
				counter++;
			}
			
			
			map_iter = id_map.find(target_id);


			if(map_iter == id_map.end() ){//empty
				id_map[target_id]=counter;
				counter++;
			}				
			///////////////////////////
			std::set<int> edge_int;
			edge_int.insert(id_map[source_id]);
			edge_int.insert(id_map[target_id]);
			edge_vectors.push_back(edge_int);

			/////////////////////////////
//			cout << "Edge in graph " << D._graphs[i][sourceVertex].vertex_id << " " << D._graphs[i][targetVertex].vertex_id << endl;
//			cout << sourceVertex << " " << targetVertex << endl;

//			cout << D._graphs[i][sourceVertex].vertex_id << " " << D._graphs[i][targetVertex].vertex_id << endl;
//			cout << id_map[source_id] << " " << id_map[target_id] << endl;

		}
		
		graphNavigation NavGraph;
		NavGraph.set_edges_vector(edge_vectors);
		
		  myfile << "Incidence_Matrix{" << i+1 << "} = ["<< NavGraph.get_Incidence_Matrix()  << "]; \n";

	    cout << NavGraph;		
	    cout << "Graph "<< i << " done "<< endl << endl;

    }
   
   //*/
   
   
   
   
    cout << "it is over friend" << endl;
      myfile.close();
    return 0;
}
