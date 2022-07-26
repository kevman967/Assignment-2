#pragma once
#include "graph.h"
#include <vector>
using namespace std;
class undirected: public graph{
    private:
    vector<vertex> vertices;
    vector<edge>edges;
    public:
    undirected();
    undirected(undirected&);
    virtual bool addvertex(vertex& v);
    virtual bool removevertex(int vertexID);
    virtual bool addedge(edge& e);
    virtual bool remove(edge& e);
    virtual bool searchvertex(const vertex& v);
    virtual bool searchedge(const edge& e);
    virtual void display() const;
    virtual string toString () const;
    virtual bool clean(); 
};