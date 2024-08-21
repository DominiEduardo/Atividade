#include <stdio.h>

double total (double a, double b, double c);

int main() {

   char nome[50];

   double salario = 0.0, comissao = 0.15, final_de_mes = 0.0, total_vendas = 0.0;

   scanf("%s", nome);
   scanf("%lf\n%lf", &salario, &total_vendas);

   final_de_mes = total(salario, comissao, total_vendas);


      printf("TOTAL = R$ %.2lf\n", final_de_mes);

    return 0;
}

double total (double a, double b, double c)
{
    double resultadoSal = 0;
    resultadoSal = a + (b * c);
    return(resultadoSal);

}
