#include <stdio.h>
#define QTDL 10

int main() {
	int i, numero, vetor[QTDL], soma = 0;
	
	printf("Encontrar impares e somar\n");
	
		for (i = 0; i < QTDL; i++){
			printf("Informe o %d numero: ", i);
			scanf ("%d", &vetor[i]);
				if (vetor[i] % 2 == 1) {
					soma = soma + vetor[i];
		}	}					
	printf("\nA soma dos valores impares: %d", soma);
}
