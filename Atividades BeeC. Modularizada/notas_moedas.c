#include <stdio.h>

int N100(int valorCentavos) {
    int notas = valorCentavos / 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    return valorCentavos % 10000;
}

int N50(int valorCentavos) {
    int notas = valorCentavos / 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    return valorCentavos % 5000;
}

int N20(int valorCentavos) {
    int notas = valorCentavos / 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    return valorCentavos % 2000;
}

int N10(int valorCentavos) {
    int notas = valorCentavos / 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    return valorCentavos % 1000;
}

int N5(int valorCentavos) {
    int notas = valorCentavos / 500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    return valorCentavos % 500;
}

int N2(int valorCentavos) {
    int notas = valorCentavos / 200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    return valorCentavos % 200;
}

int centavos1(int valorCentavos) {
    int moedas = valorCentavos / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    return valorCentavos % 100;
}

int centavos2(int valorCentavos) {
    int moedas = valorCentavos / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    return valorCentavos % 50;
}

int centavos3(int valorCentavos) {
    int moedas = valorCentavos / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    return valorCentavos % 25;
}

int centavos4(int valorCentavos) {
    int moedas = valorCentavos / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    return valorCentavos % 10;
}

int centavos5(int valorCentavos) {
    int moedas = valorCentavos / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    return valorCentavos % 5;
}

int centavos6(int valorCentavos) {
    int moedas = valorCentavos;
    printf("%d moeda(s) de R$ 0.01\n", moedas);
    return 0; 
}

int main() {
    double valor;
    scanf("%lf", &valor);

    int valorCentavos = (int)(valor * 100 + 0.5);

    printf("NOTAS: \n");
    valorCentavos = N100(valorCentavos);
    valorCentavos = N50(valorCentavos);
    valorCentavos = N20(valorCentavos);
    valorCentavos = N10(valorCentavos);
    valorCentavos = N5(valorCentavos);
    valorCentavos = N2(valorCentavos);
    
    printf("MOEDAS: \n");
    valorCentavos = centavos1(valorCentavos);
    valorCentavos = centavos2(valorCentavos);
    valorCentavos = centavos3(valorCentavos);
    valorCentavos = centavos4(valorCentavos);
    valorCentavos = centavos5(valorCentavos);
    valorCentavos = centavos6(valorCentavos);

    return 0;
}