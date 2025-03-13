#include <stdio.h>
#include <stdlib.h>

// Função que calcula o MDC (Maximo Divisor Comum) usando o Algoritmo de Euclides
int mdc(int a, int b)
{
    // Enquanto b nao for igual a 0
    while(b != 0) {
        // Calcula o resto da divisão de a por b
        int r = a % b;
        // Agora, a recebe o valor de b e b recebe o valor do resto
        a = b;
        b = r;
    }
     // Quando b for 0, a sera o MDC
    return a;

}
int main() {
    int num1, num2;

    // Solicita ao usuario para digitar dois numeros
    printf("Digite o divisor: ");
    scanf("%d", &num1);

    printf("Digite o dividendo: ");
    scanf("%d", &num2);

    // Chama a funcao mdc para calcular o MDC e exibe o resultado.
     printf("O MDC de %d e %d: %d\n", num1, num2, mdc(num1, num2));

     return 0;
}
