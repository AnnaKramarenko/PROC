#include "Out_Container.h"
#include "Out_Figure_3D.h"

void Out_Container(Container* Head, ofstream& ofst) {
    ofst << "Container contains " << Head->Len
        << " elements." << endl << endl;

    Container* Temp = Head; //�������� ��������� �� ����� ������� ��������

    for (int i = 0; i < Head->Len; i++) {
        ofst << i << ": ";
        Out_Figure_3D(Temp->Cont, ofst);

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}