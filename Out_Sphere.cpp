#include "Out_Sphere.h"

void Out_Sphere(double Density, int Temperature, Sphere* S, ofstream& ofst) {
    ofst << "It's a Sphere with Radius: " << S->Radius << endl;
    ofst << "Its Density is " << Density << endl;
    ofst << "Its Temperature of melting/burning is " << Temperature << endl << endl;
}