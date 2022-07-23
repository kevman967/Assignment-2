#include "edge.h"
#include "edge.cpp"
#include "vertex.h"
#include "vertex.cpp"
#include <iostream>
using namespace std;
int main(){
    int id1=5;
    int id2=6;
    double value1=5.1;
    double value2=6.1;
    double weight1=14.2;
    vertex one(id1,value1);
    cout<<one.get_id()<<":"<<one.get_value()<<endl;
    vertex two(id2,value2);
    cout<<two.get_id()<<":"<<two.get_value()<<endl;
    one.set_id(1);
    one.set_value(1.1);
    cout<<one.get_id()<<":"<<one.get_value()<<endl;
    two.set_id(2);
    two.set_value(2.1);
    cout<<two.get_id()<<":"<<two.get_value()<<endl;
    edge edge1(weight1,one,two);
    cout<<edge1.get_weight()<<":"<<edge1.get_starting_vertex().get_id()<<":"<<edge1.get_starting_vertex().get_value()<<endl;
    cout<<edge1.get_ending_vertex().get_id()<<":"<<edge1.get_ending_vertex().get_value()<<endl;
    vertex three(15,15.1);
    edge1.set_starting_vertex(three);
    edge1.set_ending_vertex(three);
    cout<<edge1.get_weight()<<":"<<edge1.get_starting_vertex().get_id()<<":"<<edge1.get_starting_vertex().get_value()<<endl;
    cout<<edge1.get_ending_vertex().get_id()<<":"<<edge1.get_ending_vertex().get_value()<<endl;



    

}