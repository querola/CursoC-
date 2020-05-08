// HolaMundoPlatzi.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
   
    int Direccion = 3509;
    cout << Direccion << endl;
    //crear un apuntador
    int* ApuntadorDir;
    
    ApuntadorDir = &Direccion;
    //se asigna 3 a la direccion de memoria que marca el apuntador
    *ApuntadorDir = 3;
    cout << Direccion << endl;
    
    return 0;
}


