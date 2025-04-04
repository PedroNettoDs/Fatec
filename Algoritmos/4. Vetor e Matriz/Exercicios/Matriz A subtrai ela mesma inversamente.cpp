#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//Ne--o
int main () {
    // declarando
    int a[20], b[20], soma, subtrai, i, escolha, continuar;
    srand(time(0));
    
	// apresentacao e escolha
	printf ("Calcular Matriz A\nObservacao: o elemento 19-1, 18-2, 17-3...\n\n");
	sleep(2);
	do {
	    printf ("Gostaria de informar os 20 elementos da Matriz:\nManualmente(1)\nAleatoriamente(0)\n\nR:");
	    scanf("%d", &escolha);
	
	    // processamento
	    switch (escolha) {
	        case 1:
	            for (i = 0; i < 20; i++) {
	                printf("A[%d]: ", i);
	                scanf("%d", &a[i]);
	            }
	            break;
	        case 0:
	            for (i = 0; i < 20; i++) {
	                a[i] = rand() % 100;
	                printf("n[%d]: %d \n", i, a[i]);
	            }
	            break;
	    }
	
	    // saída
	    printf("\nProcessando a Matriz A\n");
	    sleep(2);
	    printf("\nMatriz A:\n");
	
	    for (i = 0; i < 20; i++) {
	        subtrai = 19 - i;
	        b[i] = a[i] - a[subtrai];
	        printf("n[%d]: %d \n", i, b[i]);
	    }
		printf ("\nTentar novamente? (1 = Sim, 0 = Nao): ");
		scanf("%d", &continuar);
		printf ("\n\n"); 
	} while (continuar == 1);
	printf ("Obrigado!\n");

    return 0;
}
//Ne--o
