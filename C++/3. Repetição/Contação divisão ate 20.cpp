#include <stdio.h>

int main (){
    int number, divisao, x;
    float s;
    divisao = 0;
    number = 0;
    printf("Super encontrador de S ate 20 - 2000(doismil))\n");
    printf("Insira o numero de X: ");
    scanf("%d", &x);
    
    do {
    	number++;
        divisao++;
        s = x / divisao + s;
    } while (number < 20);
    	printf ("O calculo deu: %f", s);
    return 0;
}
//Ne--o