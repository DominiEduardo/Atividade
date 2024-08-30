#include <stdio.h>

int Anos(int idade) {
    return idade / 365;
}

int Meses(int idade) {
    return (idade % 365) / 30;
}

int Dias(int idade) {
    return (idade % 365) % 30;
}

int main() {
    int idade, anos, meses, dias;

    scanf("%d", &idade);

    anos = Anos(idade);
    meses = Meses(idade);
    dias = Dias(idade);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}