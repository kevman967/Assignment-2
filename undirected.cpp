#include "undirected.h"
#include <vector>
using namespace std;
undirected::undirected(){
    V = 0;
    E =0;
}
bool undirected::addvertex(vertex& v){
    vertices.push_back(v);
    V++;
    return true;
}
//check
bool undirected::removevertex(int vertexID){
    for(int i=0;i<vertices.size();i++)
    {
        if(vertices[i].get_id()==vertexID){
            for(int j = 0;j<edges.size();j++){
                if(edges[j].get_starting_vertex().get_id()==vertexID || edges[j].get_ending_vertex().get_id()==vertexID){
                    edges.erase(edges.begin()+j);
                }
            }
            vertices.erase(vertices.begin()+i);
            return true;
        }
        else
            return false;
    }
}
bool undirected::addedge(edge& e){
    edges.push_back(e);
    E++;
    return true;
}
bool undirected::remove(edge& e){
    for(int i = 0;i<edges.size();i++){
        if(edges[i].get_starting_vertex().get_id()==e.get_starting_vertex().get_id())
            if(edges[i].get_ending_vertex().get_id()==e.get_ending_vertex().get_id()){
                edges.erase(edges.begin()+i);
                return true;
            }
    }
    return false;
}

