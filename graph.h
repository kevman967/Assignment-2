#pragma once
#include "edge.h"
#include "vertex.h"
#include <string>
using namespace std;

class graph {
public:
graph();
virtual ~graph();
graph(const graph &other);
//add in one vertex; bool returns if it is added successfully.
virtual bool addvertex(vertex& v)=0;
//Bonus question: add in a set of vertices; bool retruns if it is added 
//successfully
//virtual bool addVertices(vertex* vArray) = 0;
//the edges that has connection with this vertex need to be removed; as a result, 
//some node may remain as orphan.
virtual bool removevertex(int vertexID) = 0;
//add an edge to the graph; if an edge already exists, return false;
virtual bool addedge(edge& e) = 0;
 //Bonus question : remove a set of edge; as a result, some node may remain as 
//orphan.
//virtual bool addedges(edge* eArray) = 0;
// remove the edge
virtual bool remove(edge& e)=0;
// return bool if a vertex exists in a graph;
virtual bool searchvertex( vertex& v) = 0;
// return bool if a edge exists in a graph;
virtual bool searchedge( edge& e) =0;
//Bonus question: display the path that contains the vertex;
//virtual void display(vertex& v) const = 0;
//Bonus question: display the path that contains the edge;
//virtual void display(edge& e) const = 0;
// display the whole graph with your own defined format
virtual void display() const = 0;
// convert the whole graph to a string such as 1-2-4-5; 1-3-5; each path is 
//separated by ';'
// define your own format of a string representation of the graph.
virtual string toString () const = 0;
//remove all the vertices and edges;
virtual bool clean() = 0;
};