#include <stdio.h>
#include <math.h>

int main()
{
	//Declarando variaveis
	double number, quadrado, cubo, raiz;
	
	//Entrada de dados
	printf ("Insira um numero: ");
	scanf("%lf", &number);
	
	//Processamento
	quadrado = number * number;
	cubo = number * number * number;
	raiz = sqrt(number);
	
	//Saida
	printf ("O numero %lf\nao quadrado %lf\nao cubo %lf\nsua raiz %lf\n", number, quadrado, cubo, raiz);
return 0;
}
