#include "Out_Parallelepiped.h"

void Out_Parallelepiped(double Density, int Temperature, Parallelepiped* P, ofstream& ofst) {
    ofst << "It's a Parallelepiped with Edges: " << P->A << ", " << P->B 
        << ", " << P->C << endl;
    ofst << "Its Density is " << Density << endl;
    ofst << "Its Temperature of melting/burning is " << Temperature << endl;
}