#include <stdio.h>

int main() {
	//declarar
    int x, a, produto;

	//entrada
    printf("Super encontrador de numero triangular 2000(doismil)\nDigite um numero: ");
    scanf("%d", &x);

	//processar
    a = 1;
    produto = a * (a + 1) * (a + 2);
    
    while (produto < x) {
        a++; 
        produto = a * (a + 1) * (a + 2);
    }
    if (produto == x) {
        printf("%d = numero triangular.\n", x);
    } else {
        printf("%d = nao triangular.\n", x);
    }
    return 0;
}
//Ne--o