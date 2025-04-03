#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, area, base, altura, lado, diagonalM, diagonalN, baseMaior, baseMenor;

    do {
        printf("Digite qual a forma geometrica que deseja calcular a area:\n");
        printf("1 - CIRCULO\n");
        printf("2 - RETANGULO\n");
        printf("3 - QUADRADO\n");
        printf("4 - LOSANGO\n");
        printf("5 - TRAPEZIO\n");
        printf("6 - TRIANGULO\n");
        int forma;
        scanf("%d", &forma);

        switch (forma) {
            case 1:
                printf("Digite o raio do circulo: ");
                scanf("%f", &raio);
                area = PI * raio * raio;
                printf("A area do circulo e: %.2f\n", area);
                break;

            case 2:
                printf("Digite a base do retangulo: ");
                scanf("%f", &base);
                printf("Digite a altura do retangulo: ");
                scanf("%f", &altura);
                area = base * altura;
                printf("A area do retangulo e: %.2f\n", area);
                break;

            case 3:
                printf("Digite o lado do quadrado: ");
                scanf("%f", &lado);
                area = lado * lado;
                printf("A area do quadrado e: %.2f\n", area);
                break;

            case 4:
                printf("Digite a diagonal maior do losango: ");
                scanf("%f", &diagonalM);
                printf("Digite a diagonal menor do losango: ");
                scanf("%f", &diagonalN);
                area = (diagonalM * diagonalN) / 2;
                printf("A area do losango e: %.2f\n", area);
                break;

            case 5:
                printf("Digite a base maior do trapezio: ");
                scanf("%f", &baseMaior);
                printf("Digite a base menor do trapezio: ");
                scanf("%f", &baseMenor);
                printf("Digite a altura do trapezio: ");
                scanf("%f", &altura);
                area = ((baseMaior + baseMenor) * altura) / 2;
                printf("A area do trapezio e: %.2f\n", area);
                break;

            case 6:
                printf("Digite a base do triangulo: ");
                scanf("%f", &base);
                printf("Digite a altura do triangulo: ");
                scanf("%f", &altura);
                area = (base * altura) / 2;
                printf("A area do triangulo e: %.2f\n", area);
                break;

            default:
                printf("Forma geometrica invalida!\n");
                break;
        }

        printf("Deseja calcular a area de outra forma geometrica? (1 - Sim, 0 - Nao): ");
        int continuar;
        scanf("%d", &continuar);
        if (continuar == 0) {
            break;
        }

    } while (1);
    printf("Programa encerrado.\n");
    printf("Agradecemos pela sua participacao!\n");
    printf("Ate logo!\n");
    return 0;
}
