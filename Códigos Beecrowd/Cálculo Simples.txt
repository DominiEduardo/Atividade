#include <stdio.h>
 
int main() {
    
    int codigo1=0, numero1 = 0;
    double valor1 = 0.0; 
    
    int codigo2=0, numero2 = 0;
    double valor2 = 0.0;
    
    double total =0.0;

    scanf("%d\n%d\n%lf", &codigo1, &numero1, &valor1);
    scanf("%d\n%d\n%lf", &codigo2, &numero2, &valor2);
   
    total = (numero1 * valor1) + (numero2 * valor2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    
    return 0;
}