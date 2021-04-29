#ifndef FIGURE_3D_H
#define FIGURE_3D_H

#include "Key.h"

#include <iostream>
#include <string>

using namespace std;

//Структура "3D фигура"
struct Figure_3D {
    Key K; //Идентификатор фигуры
    double Density; //Общий параметр - плотность материала фигуры
    void* Obj; //Указатель на конкретную фигуру
};

#endif // FIGURE_3D_H