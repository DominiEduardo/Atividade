#include <stdio.h>
 
int main() {
 
    int horas, velocidade;

    double distancia, litros;
    
    scanf("%d %d", &horas, &velocidade);
    
    distancia = horas * velocidade; 
    
    litros = distancia / 12.0;
    
    printf("%.3lf\n", litros);
 
    return 0;
}