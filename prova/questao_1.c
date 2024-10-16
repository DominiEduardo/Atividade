#include <stdio.h>

    int soma_pares (int vetor[10], int tamanho) {
        int soma = 0;
        for (int i = 0; i < tamanho; i++) {
            if (vetor[i] % 2 == 0){
                soma += vetor[i];
            }
        }
        return soma;
    }

    int soma_Impares (int vet[10], int tamanho) {
        int soma = 0;
        for (int i = 0; i < tamanho; i++) {
            if (vet[i] % 2 != 0){
                soma += vet[i];
            }
        }
        return soma;
    }

    int main () {

        int vet[10];
        int i, j, cont, aux;
        int pares = 0;
        int impares = 0;
        int somaPares = 0, somaImpares = 0;

    printf("digite 10 numeros: \n");

    //leitura dos 5 valores

    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\n");

    //verificação dos numeros pares e impares

    printf("pares: ");

    for (i = 0; i < 10; i++) {
        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
        }
    }

    printf("\n\nimpares: ");

    for (i = 0; i < 10; i++) {
        if(vet[i] % 2 != 0){
            printf("%d ", vet[i]);
        }
    }

    printf("\n\n");

    //atribuindo a funcao dentro das variaveis

    somaPares = soma_pares(vet, 10);
    somaImpares = soma_Impares(vet, 10);

    printf("soma dos pares: %d\n\n", somaPares);
    printf("soma dos impares: %d\n\n", somaImpares);

    //verificação dos numeros primos

    printf("primos: ");

    for (i = 0; i < 10; i++) {
        cont = 0;
            for (j = 1; j <= vet[i]; j++){
                if (vet[i] % j  == 0){
                    cont++;
                }
            }
            if (cont == 2) {
                printf("%d ", vet[i]);
            }
    }

    printf("\n\n");

    //verificacao da ordenacao crescentes dos numeros

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    //print dos valores em ordem crescente

    printf("valores em ordem crescentes: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");

    return 0;
}
