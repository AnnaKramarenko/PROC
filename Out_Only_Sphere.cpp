#include "Out_Only_Sphere.h"
#include "Out_Figure_3D.h"

void Out_Only_Sphere(Container* Head, ofstream& ofst) {
    ofst << "Only Spheres." << endl << endl;

    Container* Temp = Head; //Временно указываем на адрес первого элемента

    for (int i = 0; i < Head->Len; i++) {
        if (Temp->Cont->K == SPHERE) { //Проверка того, что фигура - шар
            ofst << i << ": ";
            Out_Figure_3D(Temp->Cont, ofst);
        }

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}