#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sexo;
    printf("Voce e macho(1) ou femea(2)?");
    scanf("%d", &sexo);

    float m, a, imc;
    printf("Indice de massa corporal\n");
    printf("Digite o peso em kg: ");
    scanf("%f", &m);

    printf("Digite a altura em m: ");
    scanf("%f", &a);

    imc = m / (a * a);

    printf("\nValor do IMC: %.2f", imc);
    system("pause");

    if (sexo = 1){
      if (imc >= 40)
        printf("\nObesidade Morbida");
    else if (imc > 30 && imc <= 39.9)
        printf("\nObesidade Moderada");
    else if (imc > 25 && imc <= 29.9)
        printf("\nObesidade Leve");
    else if (imc > 20 && imc <= 24.9)
        printf("\nNormal");
    else if (imc < 20)
        printf("\nAbaixo do normal");
    }
        else if (sexo = 2){
       if (imc >= 39)
        printf("\nObesidade Morbida");
    else if (imc > 29 && imc <= 38.9)
        printf("\nObesidade Moderada");
    else if (imc > 24 && imc <= 28.9)
        printf("\nObesidade Leve");
    else if (imc > 19 && imc <= 23.9)
        printf("\nNormal");
    else if (imc < 19)
        printf("\nAbaixo do normal");
        }
    return 0;
}
