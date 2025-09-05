#include <stdio.h>

// Struct para guardar os lados
typedef struct {
    float a, b, c;
} Paralelepipedo;

// Função que calcula a área
float area(Paralelepipedo p) {
    return 2 * (p.a * p.b + p.a * p.c + p.b * p.c);
}

int main() {
    Paralelepipedo p;

    printf("Digite os lados a, b e c: ");
    scanf("%f %f %f", &p.a, &p.b, &p.c);

    printf("Area total: %.2f\n", area(p));
    return 0;
}
