#include "Volume_Figure_3D.h"
#include "Volume_Sphere.h"
#include "Volume_Parallelepiped.h"
#include "Volume_Tetrahedron.h"

double Volume_Figure_3D(Figure_3D* F) {
    if (F->K == SPHERE) {
        return Volume_Sphere((Sphere*)F->Obj); //Подсчет объема шара
    }
    else if (F->K == PARALLELEPIPED) {
        return Volume_Parallelepiped((Parallelepiped*)F->Obj); //Подсчет объема параллелепипеда
    }
    else if (F->K == TETRAHEDRON) {
        return Volume_Tetrahedron((Tetrahedron*)F->Obj); //Подсчет объема тетраэдра
    }
    else {
        return -1;
    }
}