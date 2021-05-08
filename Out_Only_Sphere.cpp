#include "Out_Only_Sphere.h"
#include "Out_Figure_3D.h"

void Out_Only_Sphere(Container* Head, ofstream& ofst) {
    ofst << "Only Spheres." << endl << endl;

    Container* Temp = Head; //�������� ��������� �� ����� ������� ��������

    for (int i = 0; i < Head->Len; i++) {
        if (Temp->Cont->K == SPHERE) { //�������� ����, ��� ������ - ���
            ofst << i << ": ";
            Out_Figure_3D(Temp->Cont, ofst);
        }

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}