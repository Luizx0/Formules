#include <stdio.h>

int main() {
int N, i, S;
 printf("Digite a quantidade de numeros: ");
 scanf("%d", &N);

    if ( N > 0 ) {
        S = 0;
        i = 1;
        while ( i <= N ) {
            int valor;
            printf("Digite o %d numero: ", i);
            scanf("%d", &valor);
            S = S + valor;
            i = i + 1;
        }
        float media = (float)S / N;
        printf("A media aritmetica e: %.2f\n", media);
}
else {
        printf("Nao e possivel calcular a media aritmetica. \n");
    }

return 0;

}