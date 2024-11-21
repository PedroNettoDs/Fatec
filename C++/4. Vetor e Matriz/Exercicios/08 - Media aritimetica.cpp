#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define TAM 100
//Ne--0

int main (){
	int numeros[TAM], i, superiores = 0, inferiores = 0;
	float soma = 0, media;
	srand(time(0));
	
	printf("Encontrador numeros acima da media aritimetica\n\n");
	for (i = 0; i < TAM; i++) {
		numeros[i] = (rand() % 100);
		printf ("%d numero: %d\n", i, numeros[i]);
		soma += numeros[i];
	}
	
	media = soma / TAM;
	
	for (i = 0; i < TAM; i++) {
		if (numeros[i] > media) {
			superiores++;
		} else if (numeros [i] < media) {
			inferiores++;		
		}	
	}
	
    printf("\nMedia aritmetica: %.2f\n\n", media);
    printf("Quantidade de numeros superiores media: %d\n", superiores);
    printf("Quantidade de numeros inferiores media: %d\n", inferiores);

    return 0;
}
