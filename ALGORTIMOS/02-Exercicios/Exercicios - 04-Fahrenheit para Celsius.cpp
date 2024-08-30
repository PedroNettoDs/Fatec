#include <stdio.h>

int main ()
{
	//Declarando variaveis
	float fahrenheit, celsius, conversao, divisao;
	
	//Entrada de dados
	printf("Informe o Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	//Processamento 
	conversao = (fahrenheit - 32) * (5.0 / 9.0);
	//obs: caso a divisao fosse "5/9" o resultado daria 0, pois nao foi marcado como float
	
	//Saida
	printf("Temperatuda convertida = %.2f\n", conversao);	
	return 0;	
}