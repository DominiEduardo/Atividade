#include <stdio.h>
 
int main() {
    
    double valor;
    int N100, N50, N20, N10, N5, N2;
    int centavos1, centavos2, centavos3, centavos4, centavos5, centavos6;
    
    scanf("%lf", &valor);
    
    N100 = valor / 100;
    valor = valor - (N100 * 100);
    
    N50 = valor / 50;
    valor = valor - (N50 * 50);
    
    N20 = valor / 20;
    valor = valor - (N20 * 20);
    
    N10 = valor / 10;
    valor = valor - (N10 * 10);
    
    N5 = valor / 5;
    valor = valor - (N5*5);
    
    N2 = valor / 2;
    valor = valor - (N2*2);
    
    centavos1 = valor / 1;
    valor = valor - (centavos1 *1);
    
    centavos2 = valor / 0.50;
    valor = valor - (centavos2 * 0.50);
    
    centavos3 = valor / 0.25;
    valor = valor - (centavos3 * 0.25);
    
    centavos4 = valor / 0.10;
    valor = valor - (centavos4 * 0.10);
    
    centavos5 = valor / 0.05;
    valor  = valor - (centavos5 * 0.05);
    
    centavos6 = valor / 0.01;
    valor = valor - (centavos6 * 0.01);
    
    printf("NOTAS: \n");
    
    printf("%d nota(s) de R$ 100.00\n", N100);
    printf("%d nota(s) de R$ 50.00\n", N50);
    printf("%d nota(s) de R$ 20.00\n", N20);
    printf("%d nota(s) de R$ 10.00\n", N10);
    printf("%d nota(s) de R$ 5.00\n", N5);
    printf("%d nota(s) de R$ 2.00\n", N2);
    
    printf("MOEDAS: \n");
    
    printf("%d moeda(s) de R$ 1.00\n"), centavos1;
    printf("%d moeda(s) de R$ 0.50\n"), centavos2;
    printf("%d moeda(s) de R$ 0.25\n"), centavos3;
    printf("%d moeda(s) de R$ 0.10\n"), centavos4;
    printf("%d moeda(s) de R$ 0.05\n"), centavos5;
    printf("%d moeda(s) de R$ 0.01\n"), centavos6;

    return 0;
}