#include <stdio.h>

int N100(int valor) {
    int notas = valor / 100;
    printf("%d nota(s) de R$ 100,00\n", notas);
    return valor % 100;
}

int N50(int valor) {
    int notas = valor / 50;
    printf("%d nota(s) de R$ 50,00\n", notas);
    return valor % 50;
}

int N20(int valor) {
    int notas = valor / 20;
    printf("%d nota(s) de R$ 20,00\n", notas);
    return valor % 20;
}

int N10(int valor) {
    int notas = valor / 10;
    printf("%d nota(s) de R$ 10,00\n", notas);
    return valor % 10;
}

int N5(int valor) {
    int notas = valor / 5;
    printf("%d nota(s) de R$ 5,00\n", notas);
    return valor % 5;
}

int N2(int valor) {
    int notas = valor / 2;
    printf("%d nota(s) de R$ 2,00\n", notas);
    return valor % 2;
}

int N1(int valor) {
    int notas = valor / 1;
    printf("%d nota(s) de R$ 1,00\n", notas);
    return valor % 1;
}

int main() {
    int cedulas;
    
    scanf("%d", &cedulas);
    printf("%d\n", cedulas);
    
    cedulas = N100(cedulas);
    cedulas = N50(cedulas);
    cedulas = N20(cedulas);
    cedulas = N10(cedulas);
    cedulas = N5(cedulas);
    cedulas = N2(cedulas);
    cedulas = N1(cedulas);
    
    return 0;
}
