#include <stdio.h>

    int main() {

    int num1, num2, aux, soma;

    aux = 0;

    while(1) {

    scanf("%d %d", &num1, &num2);

    if(num1<=0 || num2<=0)
        break;

        else {

        soma = 0;

        if(num1<num2) {

        for(aux = num1; aux <= num2; aux++) {
            printf("%d ", aux);
            soma += aux;
        }
            printf("Soma=%d\n", soma);
        } else if(num1>num2) {

        for(aux = num2; aux <= num1; aux++) {
            printf("%d ", aux);
            soma += aux;
        }
            printf("Soma=%d\n", soma);
        }
    }
}
    return 0;
}
