#include <stdio.h>

int Soma (int a, int b);

int main() {

    int num1 = 0, num2 = 0, r = 0;

    scanf("%d\n%d", &num1, &num2);
    r = Soma(num1, num2);
    printf("SOMA = %d\n", r);

    return 0;
}

int Soma (int a, int b)
{
    int resultadoSoma = 0;
    resultadoSoma = a + b;
    return(a + b);
}
