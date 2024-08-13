#include <stdio.h>
 
int main() {
    
    int hr_trabalha = 0, numero_f = 0;
    double salario = 0.0, valor_hora = 0.0;
    
    scanf("%d\n%d\n%lf", &numero_f, &hr_trabalha,&valor_hora);
    
    salario = (valor_hora*hr_trabalha);
    
    printf("NUMBER = %d\n", numero_f);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}