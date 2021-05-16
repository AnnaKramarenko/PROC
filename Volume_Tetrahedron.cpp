#include "Volume_Tetrahedron.h"
#include <math.h>

double Volume_Tetrahedron(Tetrahedron* T) {
	return (pow((double)T->A, 3) * sqrt(2) / 12);
}
