#include <stdio.h>
 
int main() {
    double valor;
    int N100, N50, N20, N10, N5, N2;
    int centavos1, centavos2, centavos3, centavos4, centavos5, centavos6;
    
    scanf("%lf", &valor);

    int valorCentavos = (int) (valor * 100 + 0.5);

    N100 = valorCentavos / 10000;
    valorCentavos = valorCentavos % 10000;
    
    N50 = valorCentavos / 5000;
    valorCentavos = valorCentavos % 5000;
    
    N20 = valorCentavos / 2000;
    valorCentavos = valorCentavos % 2000;
    
    N10 = valorCentavos / 1000;
    valorCentavos = valorCentavos % 1000;
    
    N5 = valorCentavos / 500;
    valorCentavos = valorCentavos % 500;
    
    N2 = valorCentavos / 200;
    valorCentavos = valorCentavos % 200;
    
    centavos1 = valorCentavos / 100;
    valorCentavos = valorCentavos % 100;
    
    centavos2 = valorCentavos / 50;
    valorCentavos = valorCentavos % 50;
    
    centavos3 = valorCentavos / 25;
    valorCentavos = valorCentavos % 25;
    
    centavos4 = valorCentavos / 10;
    valorCentavos = valorCentavos % 10;
    
    centavos5 = valorCentavos / 5;
    valorCentavos = valorCentavos % 5;
    
    centavos6 = valorCentavos;
    
    printf("NOTAS: \n");
    printf("%d nota(s) de R$ 100.00\n", N100);
    printf("%d nota(s) de R$ 50.00\n", N50);
    printf("%d nota(s) de R$ 20.00\n", N20);
    printf("%d nota(s) de R$ 10.00\n", N10);
    printf("%d nota(s) de R$ 5.00\n", N5);
    printf("%d nota(s) de R$ 2.00\n", N2);
    
    printf("MOEDAS: \n");
    printf("%d moeda(s) de R$ 1.00\n", centavos1);
    printf("%d moeda(s) de R$ 0.50\n", centavos2);
    printf("%d moeda(s) de R$ 0.25\n", centavos3);
    printf("%d moeda(s) de R$ 0.10\n", centavos4);
    printf("%d moeda(s) de R$ 0.05\n", centavos5);
    printf("%d moeda(s) de R$ 0.01\n", centavos6);

    return 0;
}
