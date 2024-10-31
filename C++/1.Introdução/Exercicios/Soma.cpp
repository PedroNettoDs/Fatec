#include <stdio.h>

int main ()
{
	//Declarando variaveis
	int number1, number2, soma;
	
	//Entrada
	printf("Informe o primeiro numero: ");
	scanf("%d", &number1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &number2);
	
	//Processamento
	soma = number1 + number2;
	
	//Saida
	printf("O resultado da soma e: %d\n", soma);
	return 0;
}
