#include <stdio.h>

double soma (double a, double b) {
    return a + b;
}

double subtracao (double a, double b) {
    return a + b;
}

double multiplicacao (double a, double b) {
    return a + b;
}

double divisao (double a, double b) {
    if (b != 0) {
        return a / b;
    }
        else {
                printf("Não é possível divir com valor zero. \n");
            return 0;
        }
}

double potenciacao (double a, double b) {
    return a + b;
}

double raizQuadrada(double a, double b) {
    return a + b;
}

double equacSG(double a, double b) {
    return a + b;
}

void menuUsuario (){

    printf("Escolha sua operação: \n");
    printf("0. Sair Do Programa \n");
    printf("1. Somar \n");
    printf("2. Subtrair \n");
    printf("3. Multiplicação \n");
    printf("4. Divisão \n");
    printf("5. Potenciação \n");
    printf("6. Raiz Quadrada \n");
    printf("7. Fatorial \n");
    printf("8. MDC entre dois números \n");
    printf("10. Equação do Segundo Grau \n");

}

int main (){

    int escolhaUsuario;
    double num1, num2, resultado;

    do {
        menuUsuario ();
        printf("Digite sua escolha \n");
        scanf("%d", escolhaUsuario);

        if (escolhaUsuario >= 1 && escolhaUsuario <= 4){
            printf("Digite o primeiro número \n");
            scanf("%lf", num1);
            printf("Digite o segundo número \n");
            scanf("%lf", num2);
        }
        switch (escolhaUsuario) {
        case 0:
            printf("O usuário saiu do menu/operação \n");
            break;
        case 1:
            resultado = soma(num1, num2);
            printf("A sua soma é: %.5lf \n", resultado);
            break;
        case 2:
            resultado = subtracao(num1, num2);
            printf("A sua subtração é: %.5lf \n", resultado);
            break;
        case 3:
            resultado = multiplicacao(num1, num2);
            printf("A sua multiplicação é: %.5lf \n", resultado);
            break;
        case 4:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divisão é: %.5lf \n", resultado); }
            break;
        case 5:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divisão é: %.5lf \n", resultado); }
            break;
        case 6:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divisão é: %.5lf \n", resultado); }
            break;
        case 7:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divisão é: %.5lf \n", resultado); }
            break;
        case 8:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divisão é: %.5lf \n", resultado); }
            break;
        case 9:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divisão é: %.5lf \n", resultado); }
            break;
        case 10:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divisão é: %.5lf \n", resultado);
            }
            break;

        default:
            printf("Esta opção está inválida.");
            break;
        }

     printf("\n");

    } while (escolhaUsuario != 5);

    return 0;
}

