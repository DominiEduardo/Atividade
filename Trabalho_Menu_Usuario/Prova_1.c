#include <stdio.h>

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
        return a - b;
    }

double multiplicacao(double a, double b) {
        return a * b;
    }

double divisao(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            bandeira = 0;
            printf("Nao eh possivel dividir com valor zero. \n");
            return 0;
            }
    }

double potenciacao(double base, int expoente) {
        double resultado = 1;
        for (int i = 0; i < expoente; i++) {
            resultado *= base;
        }
        return resultado;
    }

double fatorial(int n) {
        if (n == 0) { return 1;

        } else {
            double resultado = 1;
            for (int i = 1; i <= n; i++) {
                resultado *= i;
            }
            return resultado;
        }
    }

double raizQuadrada(double a) {
        double n;
        double chute = a;

        if (chute == 0) {
            return (0);
        } else {
            //chute = 0.5 * (a+(a/a));
            for (n = 0; n < 100; n++) {
                chute = 0.5 * (chute + (a / chute));
            }
            return (chute);
        }

    }

double equacSG(double a, double b, double c) {
        double delta = b * b - 4 * (a * c);

        if (delta < 0) {
                printf("Nao e possivel este valor. \n");
} else if (delta == 0) {
    double x = -b / (2 * a);
    printf("Unica solucao. %.5f \n", x);
    } else {
    double x1 = (-b + raizQuadrada(delta)) / 2 * a;
    double x2 = (-b - raizQuadrada(delta)) / 2 * a;
    printf("Valor de X 1 = %.5f e X 2 = %.5f\n", x1, x2);
    }
}

void bandeira = 0;

    int main() {
        int escolhaUsuario;
        double num1, num2, num3;
        int expoente;

        while (1) {
                printf("\n Menu para o usuario decidir sua operacao a ser calculada: \n");
        printf("1. Sair Do Programa \n");
        printf("2. Somar \n");
        printf("3. Subtrair \n");
        printf("4. Multiplicao \n");
        printf("5. Divisao \n");
        printf("6. Potenciacao \n");
        printf("7. Raiz Quadrada \n");
        printf("8. Fatorial \n");
        printf("9. Equacao do Segundo Grau \n");
        printf("11. MDC entre dois numeros \n");
        printf("10. MDM entre dois numeros \n");
        printf("Escolha a sua opcao: ");
        scanf("%d", &escolhaUsuario);

        switch (escolhaUsuario) {
            case 1: printf("O usuario saiu do menu/operacao \n");
            return 0;
            break;

    case 2: printf("Digite dois numeros para somar: ");
    scanf("%lf %lf", &num1, &num2);
    printf("O resultado da soma eh: %.5f \n", soma(num1, num2));
    break;

    case 3: printf("Digite dois numeros para subtrair: ");
    scanf("%lf %lf", &num1, &num2); printf("O resultado da subtracao eh: %.5f \n",
    subtracao(num1, num2));
    break;

    case 4: printf("Digite dois numeros para multiplicar: ");
    scanf("%lf %lf", &num1, &num2);
    printf("O resultado da multiplicacao eh: %.5f \n", multiplicacao(num1, num2));
    break;

    case 5: printf("Digite dois numeros para dividir: ");
    scanf("%lf %lf", &num1, &num2);
    if (bandeira == 1) {
    printf("O resultado da divisao eh: %.5f \n", divisao(num1, num2));
    }
    else {
        bandeira = 0;
        printf ("Nao eh possivel a divisao com o valor 0.");
    }
    break;

    case 6: printf("Digite a base da potencia: \n");
    scanf("%lf", &num1);
    printf("Digite o expoente da potencia: ");
    scanf("%d", &expoente);
    printf("O resultado da potenciacao eh: %.5lf \n", potenciacao(num1, expoente));
    break;

    case 7:
    printf("Digite um numero inteiro para calcular a raiz quadrada: ");
    scanf("%lf", &num1); printf("O resultado da raiz quadrada escolhida eh: %.5f \n", raizQuadrada(num1));
    break;

    case 8: printf("Digite um numero inteiro para calcular a fatoriacao: "); scanf("%lf", &num1);
    printf("O resultado da fatoracao eh: %.5f \n", fatorial(num1));
    break;

    case 9:
    printf("Digite tres numeros para calcular a equacao de segundo grau: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    printf("O resultado da equacao do 2° grau eh: %.5f \n", equacSG(num1, num2, num3));
    break;
    default: printf("opcao inexistente. \n");
}
    }
    return 0;
        }
