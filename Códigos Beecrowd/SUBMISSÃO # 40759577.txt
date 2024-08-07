#include <stdio.h>
 
    #define PESO1 3.5
    #define PESO2 7.5
 
int main() {
 
    double A = 0.0, B = 0.0;
    double media = 0.0;
    
    scanf("%lf\n%lf", &A, &B);
    
    media = ((A*PESO1)+(B*PESO2))/(PESO1+PESO2);
    printf("MEDIA = %.5lf\n", media);
 
    return 0;
}