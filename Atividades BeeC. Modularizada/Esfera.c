#include <stdio.h>

double esfera (double a, double b) {
    return ((4/3.0) * b * (a * a *a));
}

int main() {

    double raio = 0.0;
    double PI = 3.14159;
    double volume = 0.0;

    scanf("%lf\n", &raio);

    volume = esfera(raio, PI);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
