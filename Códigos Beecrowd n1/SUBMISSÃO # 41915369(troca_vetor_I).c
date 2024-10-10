#include <stdio.h>

int main() {

    int i, N[20], k;

    for(i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }

    k = 0;

    for(i = 19; i >= 0; i--) {
        printf("N[%d] = %d\n", k, N[i]);
        k++;
    }

    return 0;
}
