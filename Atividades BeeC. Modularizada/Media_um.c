#include <stdio.h>

    #define PESO1 3.5
    #define PESO2 7.5

double calcula_media(double a, double b);

int main() {

    double A = 0.0, B = 0.0;
    double media = 0.0;

    scanf("%lf\n%lf", &A, &B);

    media = calcula_media(A, B);
    printf("MEDIA = %.5lf\n", media);

    return 0;
}

double calcula_media(double a, double b)
{
    return ((a * PESO1) + (b * PESO2)) / (PESO1 + PESO2);
}
