#include "undirected.h"
#include <iostream>
using namespace std;
undirected::undirected(){
    cout<<"undirected object has been created\n";
}
undirected::undirected(undirected& one){

}
bool undirected::addvertex(vertex& v){
 return true;
}
bool undirected::removevertex(int vertexID){
return true;
}
bool undirected::addedge(edge& e){
return true;
}
bool undirected::remove(edge& e){
return true;
}
bool undirected::searchvertex(const vertex& v){
return true;
}
bool undirected::searchedge(const edge& e){
return true;
}
void undirected::display()const{

}
string undirected::toString()const {
string one="hello";
return one;
}
bool undirected::clean(){
return true;
}


