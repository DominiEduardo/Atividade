#include <stdio.h>
 
double Area (double a, double b, double c);

int main() {
 
  double PI = 3.14159;
  
   double raio = 0;
   
   double area = 0;
   
   scanf("%lf", &raio);
   
   area = Area(PI, raio, area);
  
  printf("A=%.4lf\n", area);
 
    return 0;
}

double Area (double a, double b, double c)
{
    
    double resultado = 0;
    resultado = a * (b * b);
    return(resultado);

}