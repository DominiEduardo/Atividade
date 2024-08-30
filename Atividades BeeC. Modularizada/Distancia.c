#include <stdio.h>

double Distancia (distancia) {
   return 2 * distancia;
}
 
int main() {
 
   int distancia;
   int minutos;
   
    scanf("%d", &distancia);
    
    minutos = Distancia(distancia);
    
    printf("%d minutos\n", minutos);
    
    return 0;
}