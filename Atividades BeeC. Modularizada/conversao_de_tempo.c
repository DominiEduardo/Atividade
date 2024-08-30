#include <stdio.h> 

int horas (int totalS) {
    return totalS / 3600;
}

int resto (int totalS) {
    return totalS % 3600;
}

int minutos (int resto) {
    return resto / 60;
}

int segundos1 (int resto) {
    return resto % 60;
}

int main() { 
    int segundos, h, m, s, restoSegundos; 
    
    scanf("%d", &segundos);
    
    h = horas(segundos);
    restoSegundos = resto(segundos);
    m = minutos(restoSegundos);
    s = segundos1(restoSegundos);
    
    printf("%d:%d:%d\n", h, m, s); 
    
    return 0; 
    
}