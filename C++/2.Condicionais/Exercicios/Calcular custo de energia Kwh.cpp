#include <stdio.h>

int main (){
	//declarar variavel
	int consumidor, quantidade;
	float valor, preco;
	
	//entrada de dados
	printf ("Calcular custo de energia %\nInsira o codigo do consumidor: ");
	scanf ("%d", &consumidor);
	
	printf ("informe o valor do kwh atualmente: ");
	scanf ("%f", &preco);
	
	printf ("Informe a quantidade consumida: ");
	scanf ("%d", &quantidade);
	
	//processamento
	valor = preco * quantidade;
	
	if (valor > 11.20) {
		printf ("O valor total a pagar equivale: R$ %d", &valor);
	} else {
		printf ("O valor nao foi sucifiente para cobranca");
	}
}
