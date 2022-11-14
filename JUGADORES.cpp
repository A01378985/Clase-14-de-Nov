#include <iostream>
#include "JUGADORES.h"

using std::cout;
using std::string;
using std::cin;

// implementar metodos antes mencionados en JUGADORES.h

string JUGADORES::getColor(){
    return color;
}

int JUGADORES::getPos(){
    return pos;
}

string JUGADORES::getId(){
    return id;
}

void JUGADORES::setPos(int p){
    int pos = p;
}

void JUGADORES::setColor(string color){
    string color = color;
    
}

void JUGADORES::setId(string id){
    id = id;

}