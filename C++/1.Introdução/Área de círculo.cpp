#include <stdio.h>

int main ()
{
	//Declarando variaveis
	float raio, area;
	
	//Entrada de dados
	printf("Insira a raio: ");
	scanf("%f", &raio);
	
	//Processamento
	area = (3.14 * (raio * raio));
	
	//Saida
	printf("O calculo da area do triangulo e %f", area);
    return 0;
}
//Ne--o