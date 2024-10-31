#include <stdio.h>

int main() {
	//declarando variaveis
    int x, y, z;

	//entrada de dados
    printf("Descubra o tipo de triangulo %\nInforme tres valores: %\n");
    scanf("%d %d %d", &x, &y, &z);

    //processamento
    if (x + y > z && x + z > y && y + z > x) {

	//tipo de triangulo
    if (x == y && y == z) {
	    printf("Triangulo equilatero.\n");
	    } else if (x == y || x == z || y == z) {
	    printf("Triangulo isosceles.\n");
	    } else {
	    printf("Triangulo escaleno.\n");
	    }
    } else {
        printf("Os valores nao formam um triangulo.\n");
    }

    return 0;
}
//Ne--o