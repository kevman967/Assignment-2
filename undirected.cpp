#include "undirected.h"
#include <iostream>
#include <vector>
using namespace std;
undirected::undirected(){
   
    cout<<"undirected object has been created\n";
}
undirected::undirected(undirected& one){
    vertices = one.get_vertices();
    edges = one.get_edges();
}
vector<vertex> undirected::get_vertices(){
    return vertices;
}
vector<edge> undirected::get_edges(){
    return edges;
}
bool undirected::addvertex(vertex& v){
    
 vertices.push_back(v);   
 return true;
}

bool undirected::removevertex(int vertexID){
    
    //checks for any edges that have connections with vertexID
    for(int i=0;i<edges.size();i++){
        if(edges[i].get_starting_vertex().get_id()==vertexID || edges[i].get_ending_vertex().get_id()==vertexID){
            edges.erase(edges.begin()+i);
        }
    }
    //checks to see if vertex is in the vector and erases
    for(int i =0;i<vertices.size();i++){
        if(vertices[i].get_id()==vertexID){
            vertices.erase(vertices.begin()+i);
            return true;
        }
    }
    return false;
}
bool undirected::addedge(edge& e){
    edges.push_back( e );
return true;
}
bool undirected::remove(edge& e){
    for(int i =0;i<edges.size();i++){
        if(edges[i].get_starting_vertex().get_id()==e.get_starting_vertex().get_id())
            if(edges[i].get_ending_vertex().get_id()==e.get_ending_vertex().get_id())
                if(edges[i].get_weight()==e.get_weight()){
                    edges.erase(edges.begin()+i);
                    return true;
                }

    }
return false;
}
bool undirected::searchvertex( vertex& v){ //const

    vertex one;
    one = v;
    for(int i =0;i<vertices.size();i++){
        if(vertices[i].get_id()==one.get_id())
            return true;
    }
    return false;
}
bool undirected::searchedge( edge& e){//const

    edge one;
    one = e;
    for(int i=0;i<edges.size();i++){
        if(edges[i].get_starting_vertex().get_id()==one.get_starting_vertex().get_id())
            if(edges[i].get_ending_vertex().get_id()==one.get_ending_vertex().get_id())
                if(edges[i].get_weight()==one.get_weight())
                    return true;
    }
    return false;
}
void undirected::display(){//const

    vector<edge> buffer = edges;
    for(int i =0;i<edges.size();i++){
        cout<<"\n Starting vertex: "<<buffer[i].get_starting_vertex().get_id();
        cout<<" Ending vertex: "<<buffer[i].get_ending_vertex().get_id();
    }
}
string undirected::toString() {//const
    string graph;
    for(int i=0;i<vertices.size();i++){
        
    }
    return graph;
}

bool undirected::clean(){
return true;
}


