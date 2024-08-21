#include <stdio.h>

 #define PESO_A 2
 #define PESO_B 3
 #define PESO_C 5

 double media_tres(double a, double b, double c);

int main() {

    double a = 0.0, b = 0.0, c = 0.0;
    double media = 0.0;

    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    media = media_tres(a, b, c);

    printf("MEDIA = %.1lf\n",media);
    return 0;
}

double media_tres(double a, double b, double c)
{
    return((a*PESO_A)+(b*PESO_B)+(c*PESO_C))/(PESO_A+PESO_B+PESO_C);
}
