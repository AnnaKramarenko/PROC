#include "In_Figure_3D.h"
#include "In_Sphere.h"
#include "In_Parallelepiped.h"
#include "In_Tetrahedron.h"

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
    else if (K == 3) { //���� K == 3, �� ��� ��������
        F->K = TETRAHEDRON; //���������� ��, ��� ��� ��������
        F->Obj = In_Tetrahedron(ifst); //��������� ���������� � ���������
    }
    else {
        return 0;
    }

    ifst >> F->Density; //��������� ������ � ��������� ��������� ������

    return F;
}
