#ifndef OUT_TETRAHEDRON_H
#define OUT_TETRAHEDRON_H

#include "Tetrahedron.h"
#include <fstream>

using namespace std;

//Функция вывода информации о тетраэдре
void Out_Tetrahedron(double Density, Tetrahedron* T, ofstream& ofst);

#endif // OUT_SPHERE_H