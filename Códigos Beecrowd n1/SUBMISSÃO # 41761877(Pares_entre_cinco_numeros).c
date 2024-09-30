#include <stdio.h>
 
int main() {
    
    int valores[5];
    int contagem_pares = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (valores[i] % 2 == 0) {
            contagem_pares++;
        }
    }

    printf("%d valores pares\n", contagem_pares);
 
    return 0;
}