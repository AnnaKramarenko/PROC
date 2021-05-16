#include "Out_Tetrahedron.h"

void Out_Tetrahedron(double Density, int Temperature, Tetrahedron* T, ofstream& ofst) {
    ofst << "It's a Tetrahedron with Side length: " << T->A<< endl;
    ofst << "Its Density is " << Density << endl;
    ofst << "Its Temperature of melting/burning is " << Temperature << endl;
}