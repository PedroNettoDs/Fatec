#include <stdio.h>

int main()
{
	//Definindo variaveis
	float comprimento, raio;
	//Entrada
	printf("Digite o raio: ");
	scanf("%f", &raio);	
	//Processamento
	comprimento = 2 * 3.14 * raio;
	//Saida
	printf("O calculo da circuferencia deu = %.2f\n", comprimento);	
	return 0;	
}