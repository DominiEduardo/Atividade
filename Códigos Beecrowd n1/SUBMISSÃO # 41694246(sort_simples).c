#include <stdio.h>
#include <limits.h>

int main() {

    int a = 0, b = 0, c = 0;
    int maior;
    int meio;
    int menor;

    maior = INT_MIN;
    menor = INT_MAX;

    scanf("%d\n%d\n%d", &a, &b, &c);

    if (maior < a){
        maior = a;
    }

    if (maior < b){
        maior = b;
    }

    if (maior < c){
        maior = c;
    }

    if (menor > a){
        menor = a;
    }

    if (menor > b){
        menor = b;
    }

    if (menor > c){
        menor = c;
    }

    meio = a + b + c - menor - maior;

    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
