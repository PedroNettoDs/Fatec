#include <stdio.h>

int main()
{
	//Declarando variaveis
	int number, dnumber;
		
	//Entrada de dados
	printf("Digite o numero: ");
	scanf("%d", &number);	
	
	//Processamento
	dnumber = number * 2;
	
	//Saida
	printf("O dobro do numero e = %.d\n", dnumber);	
    return 0;
}
//Ne--o