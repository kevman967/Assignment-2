#pragma once
#include "graph.h"
#include "edge.h"
#include "vertex.h"
#include <vector>
using namespace std;
class undirected: public graph{
    private:
    int E,N;
    vector<vertex> vertices;
    vector<edge> edges;
    public:
    undirected();
    undirected(undirected&);
    vector<vertex> get_vertices();
    vector<edge> get_edges();
    virtual bool addvertex(vertex& );
    virtual bool removevertex(int );
    virtual bool addedge(edge& );
    virtual bool remove(edge& );
    virtual bool searchvertex( vertex& v);//const
    virtual bool searchedge( edge& e);//const
    virtual void display() ;//const
    virtual string toString () ;//const
    virtual bool clean(); 
    
};