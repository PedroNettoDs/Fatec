#include <stdio.h>

int main ()
{
	//Declarando variaveis
	int number1, number2, soma;
	
	//Entrada
	printf("Informe o primeiro numero: ");
	scanf("$int", number1);
	
	printf("Informe o segundo numero: ");
	scanf("$int", number2);
	
	//Processamento
	soma = number1 + number2;
	
	//Saida
	printf("A soma dos numeros e: ", &soma);
	return 0;
}
