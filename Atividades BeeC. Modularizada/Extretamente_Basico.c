#include <stdio.h>

int SomaInteiro(int a, int b);

int main() {
    
    int A = 0, B = 0, r = 0;
    
    scanf("%d\n%d",&A,&B);
    
    r = SomaInteiro(A, B);
    
    printf("X = %d\n", r);
 
    return 0;
}

int SomaInteiro (int a, int b)
{
    int resultado = 0;
    resultado = a + b;
    return(resultado);
}