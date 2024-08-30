#include <stdio.h>

int main()
{
	//Declarando variaveis
	float salario, novosal;
	
	//Entrada de dados
	printf("Digite seu salario: ");
	scanf("%f", &salario);	
	
	//Processamento
	novosal = 1.25 * salario;
	
	//Saida
	printf("O novo salario = %.2f\n", novosal);	
	return 0;	
}

