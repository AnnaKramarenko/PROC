#include "In_Sphere.h"

void* In_Sphere(ifstream& ifst) {
    Sphere* S = new Sphere; //�������� ������ ��� ����

    ifst >> S->Radius; //��������� ������
    
    return S;
}