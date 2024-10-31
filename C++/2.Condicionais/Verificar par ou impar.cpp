#include <stdio.h>

int main(){
	//declarando variavel
	int number, resultado;
	
	//entrada
	printf ("Identificador de numero par %\n Digite um numero: ");
	scanf ("%d", &number);
	
	//processamento
	resultado = number / 2;
		if (resultado % 2 == 0) {
			printf ("O numero e impar.");
		} else {
			printf ("O numero e par.");
		}
    return 0;
}
//Ne--o