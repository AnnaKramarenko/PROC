#include "In_Figure_3D.h"
#include "In_Sphere.h"
#include "In_Parallelepiped.h"

Figure_3D* In_Figure_3D(ifstream& ifst) {
    Figure_3D *F = new Figure_3D; //�������� ������ ��� ����� ������
    int K; //������������� ������

    ifst >> K; //��������� �� ����� ������������� ������
    if (K == 1) { //���� K == 1, �� ��� ���
        F->K = SPHERE; //���������� ��, ��� ��� ���
        F->Obj = In_Sphere(ifst); //��������� ���������� � ����
    }
    else if (K == 2) { //���� K == 2, �� ��� ��������������
        F->K = PARALLELEPIPED; //���������� ��, ��� ��� ��������������
        F->Obj = In_Parallelepiped(ifst); //��������� ���������� � ��������������e
    }
    else {
        return 0;
    }

    ifst >> F->Density; //��������� ������ � ��������� ��������� ������

    return F;
}
