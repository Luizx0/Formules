#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int A, B, C;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &A);
    printf("Escreva o segundo numero: ");
    scanf("%d", &B);
    printf("Escreva o terceiro numero: "); 
    scanf("%d", &C);

    if (A == 0) {
        printf("Nao é uma equacao de segundo grau.");
    } else {
        int delta = (B * B) - (4 * A * C);
        if (delta < 0) {
            printf("Nao existem raizes reais.");
        } else if (delta == 0) {
            float x = (float)-B / (2 * A);
            printf("A raiz e: %.2f/n", x);
        } else {
            float x1 = (float)(-B + sqrt(delta)) / (2 * A);
            float x2 = (float)(-B - sqrt(delta)) / (2 * A);
            printf("As raizes sao: %.2f e %.2f", x1, x2);
        }
    }
return 0;

}
