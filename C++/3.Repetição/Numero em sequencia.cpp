#include <stdio.h>

int main() {
	printf ("Super contador de 10 em 10 ate 1000\n");

    for (int i = 10; i <= 1000; i += 10) {
        printf("%d ", i);  // Imprime o número atual da série
    }
    
    return 0;
}

