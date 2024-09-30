#include <stdio.h>

int main() {
    int X;
    int contador = 0;

    scanf("%d", &X);

    if (X % 2 == 0) {
     X++; 
    }

    while (contador < 6) {
        printf("%d\n", X);
        X += 2;
        contador++;
    }

    return 0;
}