#include <iostream>
#include "DADO.h"
#include "JUGADORES.h"
#include "CASILLA.h"
using std::cout;
using std::endl;
using std::cin;


int main(){
    DADO dado;
    JUGADORES jugador1,jugador2;
    for (int i=0; i<10; i++)
    {
        cout << dado.tiro() <<endl;
    }
    
JUGADORES lucio;
    lucio.setColor("azul");
    lucio.setId("Lucio");
    lucio.setPos(6);
    cout<<lucio.getColor();


CASILLA c1;
    c1.setPos(10);
    c1.setCambioPos(5);
    cout << c1.mover() <<endl;
    
}
