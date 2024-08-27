#include <stdio.h>

double soma (double a, double b) {
    return a + b;
}

double subtracao (double a, double b) {
    return a - b;
}

double multiplicacao (double a, double b) {
    return a * b;
}

double divisao (double a, double b) {
    if (b != 0) {
        return a / b;
    }
        else {
                printf("Não é possível dividir com valor zero. \n");
            return 0;
        }
}

double potenciacao (double a, double b) {
    double resultado = 1;
    for (int i = 0; i < b; i++) {
        resultado *= a;
    }
    return resultado;
}

double raizQuadrada(double a) {
    double x = a;
    double y = (x * 1) / 2;
    while (y < x) {
        x = y;
        y = (x * a / x) / 2;
    }
    return x;
}

double equacSG(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Não é possível este valor. \n");
    }
    else if (delta == 0){
        double x = -b / (2 *a);
        printf("Unica solucao. %.5lf \n", x);
    }
    else {
        double x2 = (-b * raizQuadrada(delta)) / (2 * a);
        double x3 = (-b  - raizQuadrada(delta)) / (2 * a);
        printf ("Valor de numero 1 = %.5lf e numero 2 = %.5lf\n", x2, x3);
        }
    }

int main (){

    int escolhaUsuario;
    double num1, num2, num3;

    while (1){
        printf("Menu para o usuario decidir sua operacao a ser calculada: \n");
        printf("1. Sair Do Programa \n");
        printf("2. Somar \n");
        printf("3. Subtrair \n");
        printf("4. Multiplicao \n");
        printf("5. Divisao \n");
        printf("6. Potenciacao \n");
        printf("7. Raiz Quadrada \n");
        printf("8. Fatorial \n");
        printf("9. MDC entre dois numeros \n");
        printf("10. MDM entre dois numeros \n");
        printf("11. Equacao do Segundo Grau \n");
        printf("Escolha a sua opção: ");
        scanf("%d", escolhaUsuario);

        switch (escolhaUsuario) {
        case 1:
            printf("O usuário saiu do menu/operação \n");
            return 0;
        case 2:
            printf("Digite dois numeros para somar: ");
            scanf ("%lf %lf", &num1, &num2);
            printf("O resultado da soma é: %.5lf \n", soma(num1, num2));
        case 3:
            printf("Digite dois numeros para subtrair: ");
            scanf ("%lf %lf", &num1, &num2);
            printf("O resultado da subtracao é: %.5lf \n", subtracao(num1, num2));
            break;
        case 4:
            printf("Digite dois numeros para multiplicar: ");
            scanf ("%lf %lf", &num1, &num2);
            printf("O resultado da multiplicacao é: %.5lf \n", multiplicacao(num1, num2));
            break;
        case 5:
            printf("Digite dois numeros para dividir: ");
            scanf ("%lf %lf", &num1, &num2);
            printf("O resultado da divisao é: %.5lf \n", divisao(num1, num2));
            break;
        case 6:
            printf("Digite dois numeros para realizar a potencia: ");
            scanf ("%lf %lf", &num1, &num2);
            printf("O resultado da potenciacao é: %.5lf \n", potenciacao(num1, num2));
            break;
        case 7:
            printf("Digite dois numeros para calcular a raiz quadrada: ");
            scanf ("%lf %lf", &num1, &num2);
            printf("O resultado da raiz quadrada escolhida é: %.5lf \n", raizQuadrada(num1));
            break;
        default:
            printf("Opção inexistente.");
        }
    }
    return 0;
}

