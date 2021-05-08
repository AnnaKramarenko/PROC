#include "Volume_Sphere.h"

#define _USE_MATH_DEFINES
#include <math.h>

double Volume_Sphere(Sphere* S) {
	return (M_PI * pow((double)S->Radius, 3) / 3);
}