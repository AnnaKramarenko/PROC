#include "Out_Figure_3D.h"
#include "Out_Sphere.h"
#include "Out_Parallelepiped.h"

void Out_Figure_3D(Figure_3D* F, ofstream& ofst) {
    if (F->K == SPHERE) {
        Out_Sphere(F->Density, (Sphere*)F->Obj, ofst); //������� ���������� � ����
    }
    else if (F->K == PARALLELEPIPED) {
        Out_Parallelepiped(F->Density, (Parallelepiped*)F->Obj, ofst); //������� ���������� � ���������������
    }
    else {
        ofst << "Incorrect element!" << endl;
    }
}
