#include <stdio.h>

int main() {

for(int n = 1; n <= 100; n++){
    int rest = n % 2;
    if(rest == 0){
        printf("%d \n", n);
       }
}
}
