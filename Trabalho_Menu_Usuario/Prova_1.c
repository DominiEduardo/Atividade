#include <stdio.h>

// prototipos das funcoes

double soma(double a, double b);

double subtracao(double a, double b);

double multiplicacao(double a, double b);

double divisao(double a, double b);

double potenciacao(double base, int expo);

int fatorial(int n);

double raizQuadrada(double a);

double equacSG(double a, double b, double c);

int MDC (int a, int b);

int MMC (int a, int b);

int main() {
    int escolhaUsuario;   // escolha do que o usuario deseja
    double num1, num2, num3;    // numeros que estao armazenados em uma variavel que esta inclementada junto as funcoes

    // laco que ira printar para o usuario decidir o que deseja calcular
    while (1) {
        printf("\nMenu para o usuario decidir sua operacao a ser calculada:\n");
        printf("0. Sair Do Programa\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Divisao\n");
        printf("5. Potenciacao\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Fatorial\n");
        printf("8. Equacao do Segundo Grau\n");
        printf("9. MDC entre dois numeros\n");
        printf("10. MMC entre dois numeros\n");
        printf("Escolha a sua opcao: \n");

        // vereficacao de um inteiro
        if (scanf("%d", &escolhaUsuario) != 1) {
            printf("escolha nao autorizada, por obsequio, digitar um valor inteiro. \n");
            // limpeza do buffer
            while (getchar() != '\n');
            continue;
        }

        switch (escolhaUsuario) {
            case 0: // caso usuario escolher sair do menu, ira printar isso
                printf("O usuario saiu do menu.\n");
                return 0;

            case 1: // caso usuario escolher soma, ira printar isso
                printf("Digite dois numeros para somar: ");
                scanf("%lf %lf", &num1, &num2);
                printf("O resultado da soma eh: %.5f\n", soma(num1, num2));
                break;

            case 2: // caso usuario escolher subtracao, ira printar isso
                printf("Digite dois numeros para subtrair: ");
                scanf("%lf %lf", &num1, &num2);
                printf("O resultado da subtracao eh: %.5f\n", subtracao(num1, num2));
                break;

            case 3: // caso usuario escolher multiplicacao, ira printar isso
                printf("Digite dois numeros para multiplicar: ");
                scanf("%lf %lf", &num1, &num2);
                printf("O resultado da multiplicacao eh: %.5f\n", multiplicacao(num1, num2));
                break;

            case 4: // caso usuario escolher divisao, ira printar isso
                printf("Digite dois numeros para dividir: ");
                scanf("%lf %lf", &num1, &num2);
                printf("O resultado da divisao eh: %.5lf\n", divisao(num1, num2));
                break;

            case 5: // caso usuario escolher potenciacao, ira printar isso
                printf("Digite a base da potencia: ");
                scanf("%lf", &num1);
                printf("Digite o expoente da potencia (numero inteiro): ");
                int expoente;
                scanf("%d", &expoente);
                printf("O resultado da potenciacao eh: %.5lf\n", potenciacao(num1, expoente));
                break;

            case 6: // caso usuario escolher raiz quadrada, ira printar isso
                printf("Digite um numero para calcular a raiz quadrada: \n");
                scanf("%lf", &num1);
                if (num1 < 0 ) {
                    printf("nao eh possivel calcular a raiz quadrada de um numero negativo. \n");
                }
                else {
                printf("O resultado da raiz quadrada escolhida eh: %.5f\n", raizQuadrada(num1));
                 }
                break;

            case 7: // caso usuario escolher fatorial, ira printar isso
                 printf("Digite um numero inteiro para calcular o fatorial: ");
                int numFatorial;
                if (scanf("%d", &numFatorial)!= 1 || numFatorial < 0) {
                    printf("entrada invalida, digite outro numero nao sendo negativo. \n"); 
                    scanf("%*s");
                } else {
                    printf("O resultado do fatorial eh: %d \n", fatorial(numFatorial));
                }
                break;

            case 8: // caso usuario escolher equacao do segundo grau, ira printar isso
                printf("Digite tres numeros para calcular a equacao de segundo grau: ");
                scanf("%lf %lf %lf", &num1, &num2, &num3);
                equacSG(num1, num2, num3);
                break;

            case 9: // caso usuario escolher MDC, ira printar isso
            printf("Digite dois numeros para calcular o MDC: ");
            int numMDC, numMDC2;
            scanf("%d %d", &numMDC, &numMDC2);
            printf("O resultado da operacao eh: %d \n", MDC(numMDC, numMDC2));
            break;

            case 10: // caso usuario escolher MMC, ira printar isso
            printf("Digite dois numeros para descobrir o valor do MMC: ");
            int numMMC, numMMC2;
            scanf("%d %d", &numMMC, &numMMC2);
            printf("O resultado da operacao eh: %d \n", MMC(numMMC, numMMC2));
            break;

            default: // caso o usuario escolher um numero fora do menu, ira printar isso
                printf("opcao inexistente.\n");
        }
    }

    return 0;
}

// funcao para soma
double soma(double a, double b) {
    return a + b;
}

// funcao para subtracao
double subtracao(double a, double b) {
    return a - b;
}

// funcao para multiplicacao
double multiplicacao(double a, double b) {
    return a * b;
}

// funcao para divisao
double divisao(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Nao eh possivel dividir com valor zero(0). \n");
        return 0;
    }
}

// funcao para potenciacao
double potenciacao(double base, int expo) {
    double resultado = 1;
    for (int i = 0; i < expo; i++) {
        resultado *= base;
    }
    return resultado;
}

// funcao para raiz quadrada
double raizQuadrada(double a) {
    double n;
    double chute = a;

    if (chute == 0) {
        return 0;
    } else {
        for (n = 0; n < 100; n++) {
            chute = 0.5 * (chute + (a / chute));
        }
        return chute;
    }
}

// funcao para fatorial
int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        int resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
}

// funcao para equacao de segundo grau
double equacSG(double a, double b, double c) {
    double delta = b * b - 4 * (a * c);

    if (delta < 0) {
        printf("valor invalido. \n");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("unica opcao: %.5f\n", x);
    } else {
        double x1 = (-b + raizQuadrada(delta)) / (2 * a);
        double x2 = (-b - raizQuadrada(delta)) / (2 * a);
        printf("valor de X1 = %.5f e X2 = %.5f\n", x1, x2);
    }
}

// funcao para MDC
int MDC (int a, int b) {
    int r;
    while (b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int MMC (int a, int b) {
    int r;
    r = (a * b) / (MDC(a, b));
    return r;
}
