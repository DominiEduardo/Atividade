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
                printf("N�o � poss�vel divir com valor zero. \n");
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

    printf("Escolha sua opera��o: \n");
    printf("0. Sair Do Programa \n");
    printf("1. Somar \n");
    printf("2. Subtrair \n");
    printf("3. Multiplica��o \n");
    printf("4. Divis�o \n");
    printf("5. Potencia��o \n");
    printf("6. Raiz Quadrada \n");
    printf("7. Fatorial \n");
    printf("8. MDC entre dois n�meros \n");
    printf("10. Equa��o do Segundo Grau \n");

}

int main (){

    int escolhaUsuario;
    double num1, num2, resultado;

    do {
        menuUsuario ();
        printf("Digite sua escolha \n");
        scanf("%d", escolhaUsuario);

        if (escolhaUsuario >= 1 && escolhaUsuario <= 4){
            printf("Digite o primeiro n�mero \n");
            scanf("%lf", num1);
            printf("Digite o segundo n�mero \n");
            scanf("%lf", num2);
        }
        switch (escolhaUsuario) {
        case 0:
            printf("O usu�rio saiu do menu/opera��o \n");
            break;
        case 1:
            resultado = soma(num1, num2);
            printf("A sua soma �: %.5lf \n", resultado);
            break;
        case 2:
            resultado = subtracao(num1, num2);
            printf("A sua subtra��o �: %.5lf \n", resultado);
            break;
        case 3:
            resultado = multiplicacao(num1, num2);
            printf("A sua multiplica��o �: %.5lf \n", resultado);
            break;
        case 4:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divis�o �: %.5lf \n", resultado); }
            break;
        case 5:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divis�o �: %.5lf \n", resultado); }
            break;
        case 6:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divis�o �: %.5lf \n", resultado); }
            break;
        case 7:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divis�o �: %.5lf \n", resultado); }
            break;
        case 8:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divis�o �: %.5lf \n", resultado); }
            break;
        case 9:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divis�o �: %.5lf \n", resultado); }
            break;
        case 10:
            resultado = divisao(num1, num2);
            if (num2 != 0) {
            printf("A sua divis�o �: %.5lf \n", resultado);
            }
            break;

        default:
            printf("Esta op��o est� inv�lida.");
            break;
        }

     printf("\n");

    } while (escolhaUsuario != 5);

    return 0;
}

