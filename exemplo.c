#include "paralelepipedo.h"

float area(Paralelepipedo p) {
    return 2 * (p.a * p.b + p.a * p.c + p.b * p.c);
}
