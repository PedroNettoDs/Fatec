#include <stdio.h>

int main ()
{
	//Declarando variaveis
	float base, altura, area;
	
	//Entrada de dados
	printf("Insira a base: ");
	scanf("%f", &base);
	
	printf("Insira a altura: ");
	scanf("%f", &altura);
	
	//Processamento
	area = ((base * altura) / 2.0);
	
	//Saida
	printf("O calculo da area do triangulo e %f\n", area);
	return 0;
}