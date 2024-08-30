#include <stdio.h>
 
int main() {
 
    int cedulas; 
    
    int N100, N50, N20, N10, N5, N2, N1;
    
    scanf("%d", &cedulas);
    
    printf("%d\n", cedulas);
    
    N100 = cedulas / 100;
    cedulas = cedulas % 100;
    
    N50 = cedulas / 50;
    cedulas = cedulas % 50;
    
    N20 = cedulas / 20;
    cedulas = cedulas % 20;
    
    N10 = cedulas / 10;
    cedulas = cedulas % 10;
    
    N5 = cedulas / 5;
    cedulas = cedulas % 5;
    
    N2 = cedulas / 2;
    cedulas = cedulas % 2;
    
    N1 = cedulas;
    
    printf("%d nota(s) de R$ 100,00\n", N100);
    printf("%d nota(s) de R$ 50,00\n", N50);
    printf("%d nota(s) de R$ 20,00\n", N20);
    printf("%d nota(s) de R$ 10,00\n", N10);
    printf("%d nota(s) de R$ 5,00\n", N5);
    printf("%d nota(s) de R$ 2,00\n", N2);
    printf("%d nota(s) de R$ 1,00\n", N1);
 
    return 0;
}