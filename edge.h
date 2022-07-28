#pragma once
#include "vertex.h"
class edge{
    private:
        double weight;
        vertex starting_vertex;
        vertex ending_vertex;
    public:
        edge();
        edge(double,vertex&,vertex&);
        edge(edge& );
        //getter and setter
        double get_weight();
        vertex get_starting_vertex();
        vertex get_ending_vertex();
        void set_weight(double);
        void set_starting_vertex(vertex&);
        void set_ending_vertex(vertex&);
        
};