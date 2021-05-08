#include "Out_Container.h"
#include "Out_Figure_3D.h"
#include "Volume_Figure_3D.h"

void Out_Container(Container* Head, ofstream& ofst) {
    ofst << "Container contains " << Head->Len
        << " elements." << endl << endl;

    Container* Temp = Head; //Временно указываем на адрес первого элемента

    for (int i = 0; i < Head->Len; i++) {
        ofst << i << ": ";
        Out_Figure_3D(Temp->Cont, ofst);

        ofst << "The Figure's Volume is " << Volume_Figure_3D(Temp->Cont) << endl << endl;

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}