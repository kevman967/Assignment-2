#include "edge.h"
edge::edge(){
    weight = 0;
}
edge::edge(double weight1,vertex& s, vertex& e):starting_vertex(s),ending_vertex(e){
    weight=weight1;
}
edge::edge(edge& copy){
    starting_vertex = copy.get_starting_vertex();
    ending_vertex= copy.get_ending_vertex();
    weight=copy.get_weight();
}
//getter and setter
double edge::get_weight(){
    return weight;
}
vertex edge::get_starting_vertex(){
    return starting_vertex;
}
vertex edge::get_ending_vertex(){
    return ending_vertex;
}
void edge::set_weight(double weight1){
    weight = weight1;
}
void edge::set_starting_vertex(vertex& s){
    starting_vertex = s;
}
void edge::set_ending_vertex(vertex& e){
    ending_vertex = e;
}


