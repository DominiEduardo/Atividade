#include <stdio.h>

int main() {

    int X;

    while (scanf("%d", &X) && X != 0) {
        for (int i = 1; i <= X; i++) {
            if (i < X) {
                printf("%d ", i);
            } else {
                printf("%d", i);
            }
        }
        printf("\n");
    }

    return 0;
}
