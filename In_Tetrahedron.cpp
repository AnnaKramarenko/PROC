#include "In_Tetrahedron.h"

void* In_Tetrahedron(ifstream& ifst) {
    Tetrahedron* T = new Tetrahedron; //�������� ������ ��� ���������

    ifst >> T->A; //��������� ����� �������

    return T;
}