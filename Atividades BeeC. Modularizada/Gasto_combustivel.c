#include <stdio.h>

double Distancia (int horas1, double velocidade1) {
    return horas1 * velocidade1;
}

double Litros (double distancia) {
    return distancia / 12.0;
}
 
int main() {
 
    int horas, velocidade;

    double distancia, litros;
    
    scanf("%d %d", &horas, &velocidade);
    
    distancia = Distancia(horas, velocidade); 
    
    litros = Litros(distancia);
    
    printf("%.3lf\n", litros);
 
    return 0;
}