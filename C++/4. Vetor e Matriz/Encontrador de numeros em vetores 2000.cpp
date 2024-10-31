#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define QTDL 101

int main (){
	int number[QTDL], posicao[QTDL];
	int i, escolha, continuar;
	int p;
  	srand(time(0));
  	
  	do {
  		p = 0;
  		printf ("Encontrador de numeros em vetores 2000\nPrimeiro, sera gerado numeracoes aleatorias.\n");
  		sleep (2);
 		printf ("Agora informe o numero que deseja encontrar: ");
		scanf ("%d", &escolha);
		sleep (2);

		for (i=0; i<QTDL; i++){ 
			number[i] = (rand() % 100);
			printf ("n[%d]: %d \n", i, number[i]);
			
			if (number[i] == escolha){
				 posicao[p] = i;
				 p++;
			}
		}
		
  		sleep (3);
		
		if (p > 0){
			printf ("\n\nO numero %d apareceu nas seguintes posicoes:\n", escolha);
			for (i=0; i<p; i++){	
				printf("Posicao: %d\n", posicao[i]);
			}
		} else {
			printf ("\n\nO numero nao apareceu :(");
		}
		
		printf ("\nTentar novamente? (1 = Sim, 0 = Nao): ");
		scanf("%d", &continuar);
		printf ("\n\n");
		
	} while (continuar == 1);
	
	printf ("Obrigado!\n");
    return 0;
}
//Ne--o
