#include <stdio.h>

void Imprimir();
int soma(int a, int b);

int main () {

int a = 0, b = 0;

Imprimir();
printf("%d", soma(a, b));

return(0);

}

void Imprimir()
{

printf("ola galera\n");

}

int soma(int a, int b) {

int soma = 0;
a = 5;
b = 3;
soma = a+b;
return(soma);

}
