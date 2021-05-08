#include "Compare.h"
#include "Volume_Figure_3D.h"

bool Compare(Container* First, Container* Second) {
    return Volume_Figure_3D(First->Cont) > Volume_Figure_3D(Second->Cont);
}