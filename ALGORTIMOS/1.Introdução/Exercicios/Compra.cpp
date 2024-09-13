#include <stdio.h>

int main()
{
	//Declarando variáveis
	int salgado, coca, lanche, total;

	//Entrada
	printf ("Bem vindo a lanchonete %\n informe a quantidade desejada %\n Salgado = R$ 8 %\n Coca = R$ 4 %\n Lanche = R$ 10 %\n");
	printf ("Quantos salgados deseja: ");
	scanf ("%d", &salgado);
	printf ("Quantas cocas deseja: ");
	scanf ("%d", &coca);
	printf ("Quantos lanches deseja: ");
	scanf ("%d", &lanche);
	printf ("Voce escolheu %d Salgado %d Coca %d lanche. %\n", salgado, coca, lanche);
	
	//Processamento
	salgado = salgado * 8;
	coca = coca * 4;
	lanche = lanche * 10;
	total = salgado + coca + lanche;
	//
	
	printf ("o valor dos produtos selecionados R$ %d", total);
	return 0;
}
