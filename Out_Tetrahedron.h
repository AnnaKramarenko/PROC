#ifndef OUT_TETRAHEDRON_H
#define OUT_TETRAHEDRON_H

#include "Tetrahedron.h"
#include <fstream>

using namespace std;

//������� ������ ���������� � ���������
void Out_Tetrahedron(double Density, int Temperature, Tetrahedron* T, ofstream& ofst);

#endif // OUT_SPHERE_H