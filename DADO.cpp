#include <iostream>
#include <cmath>
#include "DADO.h"
#include <stdlib.h>
#include <time.h>

int DADO::tiro(){
    srand(time(NULL)); // Para que no siempre sea lo mismo
    //int n_rand = 1+rand()%6;
    return 1+rand()%6; //Utilizar un valor random  hasta el 6 
}
