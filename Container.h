#ifndef CONTAINER_H
#define CONTAINER_H

#include "Figure_3D.h"

//���������
struct Container {
    int Len; //����� ����������
    Figure_3D* Cont; //��������� �� �������� ������������� ������
    Container* Prev; //��������� �� ���������� ������� ����������
    Container* Next; //��������� �� ��������� ������� ����������
};

#endif // CONTAINER_H