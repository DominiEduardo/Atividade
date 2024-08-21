#include <stdio.h>

int Multiplicacao(int a, int b);

int main() {

  int  A = 0, B = 0, PROD = 0;;

  scanf("%d\n%d", &A, &B);

  PROD = Multiplicacao(A, B);

  printf("PROD = %d\n", PROD);

    return 0;
}

int Multiplicacao(int a, int b)
{
    int resultadoMult = 0;
    resultadoMult = a * b;
    return(resultadoMult);
}
