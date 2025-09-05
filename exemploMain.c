#include <stdio.h>
#include "paralelepipedo.h"

int main() {
    Paralelepipedo p;
    printf("Digite os lados a, b e c: ");
    scanf("%f %f %f", &p.a, &p.b, &p.c);

    printf("Area total: %.2f\n", area(p));
    return 0;
}
