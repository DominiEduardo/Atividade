#include <stdio.h>
#include <stdlib.h>

int MaiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int maior = MaiorAB(a, b);

    maior = MaiorAB(maior, c);

    printf("%d eh o maior\n", maior);

    return 0;
}