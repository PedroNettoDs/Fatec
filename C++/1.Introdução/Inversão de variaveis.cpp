#include <stdio.h>

int main()
{
	//Declarar variaveis
	int conteudo1, conteudo2, troca;

	//Entrada de dados	
	printf("Digite dois valores: \n");
	scanf("%d %d", &conteudo1, &conteudo2);
	
	printf("Valores lidos: Primeiro: %d\tSegundo: %d\n", conteudo1, conteudo2);	
	
	//Processamento
	troca = conteudo1;
	conteudo1 = conteudo2;
	conteudo2 = troca;
	
	//Saida
	printf("Invertido agora: Primeiro: %d\tSegundo: %d\n", conteudo1, conteudo2);
    return 0;
}
//Ne--o