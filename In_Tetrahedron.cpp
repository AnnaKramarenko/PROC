#include "In_Tetrahedron.h"

void* In_Tetrahedron(ifstream& ifst) {
    Tetrahedron* T = new Tetrahedron; //Выделяем память для тетраэдра

    ifst >> T->A; //Считываем длину стороны

    return T;
}