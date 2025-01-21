#include <stdio.h>

int main() {
    int number = 1;  
    int loop = 1;    

    printf("Superencontrador de numeros de 1 a 50 \n");

    do {
        printf("%d, ", number);
        number++;
        loop++;
    } while (loop < 50); 
    printf("%d.", number); 
    return 0;
}
//Ne--o