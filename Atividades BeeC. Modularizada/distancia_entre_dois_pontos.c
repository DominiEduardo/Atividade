#include <stdio.h>

double raizQuadrada (double a) {
        double n;
        double chute = a;

        if (chute == 0) {
            return (0);
        } else {
            for (n = 0; n < 100; n++) {
                chute = 0.5 * (chute + (a / chute));
            }
            return (chute);
        }

    }
    
double Distancia (double x1, double y1, double x2, double y2) {
    double valor;
    valor = raizQuadrada((x2 - x1) * (x2 - x1) + (y2- y1) * (y2 - y1));
    return valor;
}
 
int main() {
 
    double X1, Y1, X2, Y2;
    
    double distancia;
    
    scanf("%lf %lf", &X1, &Y1);
    
    scanf("%lf %lf", &X2, &Y2);

    distancia = Distancia(X1,Y1,X2,Y2);
    
    printf("%.4lf\n", distancia);
 
    return 0;
}