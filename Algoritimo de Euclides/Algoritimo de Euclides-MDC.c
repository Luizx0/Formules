#include <stdio.h>

int mdc(int a, int b)
{
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;

}
int main() {
    int num1, num2;

    printf("Digite o divisor: ");
    scanf("%d", &num1);

    printf("Digite o dividendo: ");
    scanf("%d", &num2);

     printf("O MDC de %d e %d: %d\n", num1, num2, mdc(num1, num2));

     return 0;
}
