#include <stdio.h>

double Consumo1 (int a, double b) {
 return a / b;    
}
 
int main() {
    
    int distancia;
    double combustivel, consumo;
    
    scanf("%d %lf", &distancia, &combustivel);
    
    consumo = Consumo1 (distancia, combustivel);
    
    printf("%.3lf km/l\n", consumo);
    
    return 0;
}