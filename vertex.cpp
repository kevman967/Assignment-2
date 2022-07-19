#include "vertex.h"
vertex::vertex(){
 id = 0;
 value =0;
}
vertex::vertex(int one,double two){

}
vertex::vertex(vertex& copy){
    id = copy.get_id();
    value = copy.get_value();
}
int vertex::get_id(){
    return id;
}
double vertex::get_value(){
    return value;
}
void vertex::set_id(int one){
    id = one;
}
void vertex::set_value(double one){
    value = one;
}