#include <stdio.h>
 
int main() {
 
   char nome[50];
   
   double salario = 0.0, comissao = 0.15, final_de_mes = 0.0, total_vendas = 0.0;
   
   scanf("%s\n", nome);
   scanf("%lf\n%lf",&salario, &total_vendas);
   
   final_de_mes = salario+(total_vendas*comissao);
   
   
      printf("TOTAL = R$ %.2lf\n", final_de_mes);
   
    return 0;
}