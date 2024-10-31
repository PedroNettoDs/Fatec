#include <stdio.h>

int main()
{
	//Declarando variaveis
	float number1, number2, number3, number4, soma;
	
	//Entrada de dados
	printf("Insira o primeiro numero: ");
	scanf("%f", &number1);

	printf("Insira o segundo numero: ");
	scanf("%f", &number2);
	
	printf("Insira o terceiro numero: ");
	scanf("%f", &number3);
	
	printf("Insira o qurto numero: ");
	scanf("%f", &number4);
	
	//Processamento
	soma = number1 + number2 + number3 + number4;
	
	//Saida
	printf("O seu calculo deu = %.2f\n", soma);	
    return 0;
}
//Ne--o