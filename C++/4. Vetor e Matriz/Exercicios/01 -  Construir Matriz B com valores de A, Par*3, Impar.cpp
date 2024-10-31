#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//Ne--o

int main() {
	//declarando
	int a[20], b[20], soma, i, escolha;
	srand(time(0));
	
	//apresentacao e escolha
	printf ("Construir Matriz B com valores de A\nObservacao: Pares X*3, Impar X/2\n\n");
	sleep(2);
	printf ("Gostaria de informar os 20 elementos da Matriz:\nManualmente(1)\nAleatoriamente(0)\n\nR:");
	scanf ("%d", &escolha);

	//processamento
	switch (escolha){
		case 1:
			for (i = 0; i<20 ; i++) {
				printf("A[%d]: ", i);
      			scanf("%d", &a[i]);
      		}
    	break;
    	case 0:
    		for (i = 0; i<20 ; i++) {
    			a[i] = (rand() % 100);
				printf("n[%d]: %d \n", i, a[i]);
			}
		break;
	}
	
	//saida
	printf ("\nProcessando a Matriz B\n\n");
	sleep(2);
	printf ("\nMatriz B:\n");
	for (soma = 0; soma<20; soma++) {
		if (a[soma] % 2 != 0){
		b[soma] = a[soma] / 2;
		} 
		else {
		b[soma] = a[soma] * 3;
		}
	printf("n[%d]: %d \n", soma, b[soma]);
	}
}
//Ne--o
