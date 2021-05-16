#ifndef FIGURE_3D_H
#define FIGURE_3D_H

#include "Key.h"

#include <iostream>
#include <string>

using namespace std;

//��������� "3D ������"
struct Figure_3D {
    Key K; //������������� ������
    double Density; //����� �������� - ��������� ��������� ������
    int Temperature; //����������� ���������/������� ��������� ������
    void* Obj; //��������� �� ���������� ������
};

#endif // FIGURE_3D_H