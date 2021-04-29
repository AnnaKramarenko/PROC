#include "In_Figure_3D.h"
#include "In_Sphere.h"
#include "In_Parallelepiped.h"

Figure_3D* In_Figure_3D(ifstream& ifst) {
    Figure_3D *F = new Figure_3D; //Выделяем память под новую фигуру
    int K; //Идентификатор фигуры

    ifst >> K; //Считываем из файла идентификатор фигуры
    if (K == 1) { //Если K == 1, то это шар
        F->K = SPHERE; //Записывает то, что это шар
        F->Obj = In_Sphere(ifst); //Считываем информацию о шаре
    }
    else if (K == 2) { //Если K == 2, то это параллелепипед
        F->K = PARALLELEPIPED; //Записывает то, что это параллелепипед
        F->Obj = In_Parallelepiped(ifst); //Считываем информацию о параллелепипедe
    }
    else {
        return 0;
    }

    ifst >> F->Density; //Считываем данные о плотности материала фигуры

    return F;
}
