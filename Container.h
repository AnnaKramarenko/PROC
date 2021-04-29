#ifndef CONTAINER_H
#define CONTAINER_H

#include "Figure_3D.h"

//Контейнер
struct Container {
    int Len; //Длина контейнера
    Figure_3D* Cont; //Указатель на объемную геомтрическую фигуру
    Container* Prev; //Указатель на предыдущий элемент контейнера
    Container* Next; //Указатель на следующий элемент контейнера
};

#endif // CONTAINER_H