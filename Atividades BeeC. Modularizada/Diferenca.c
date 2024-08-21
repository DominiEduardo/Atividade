#include <stdio.h>

int diferenca_um (int a, int b, int c, int d);

int main() {

   int A= 0, B = 0, C = 0, D = 0;
   int diferenca = 0;

   scanf("%d\n%d\n%d\n%d", &A, &B, &C, &D);

   diferenca = diferenca_um (A, B, C, D);

   printf("DIFERENCA = %d\n", diferenca);

    return 0;
}

int diferenca_um (int a, int b, int c, int d)
{
    int resultado = 0;
    resultado = (a*b - c*d);
    return(resultado);
}
