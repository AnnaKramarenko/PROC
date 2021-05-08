#include "Volume_Parallelepiped.h"

double Volume_Parallelepiped(Parallelepiped* P) {
	return (P->A * P->B * P->C);
}