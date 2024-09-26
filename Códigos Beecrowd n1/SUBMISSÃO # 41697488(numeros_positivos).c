#include <stdio.h>

int main()
{

    double val [5];
    int positivos = 0;

    for (int i = 0; i < 5; i++){
        scanf("%lf\n", &val[i]);

        if (val[i] > 0){
            positivos++;
        }
    }
    printf("%d valores positivos", positivos);

    return 0;
}
