#include <stdio.h>
#include <unistd.h>

int main (){
	int number = 0, escolha;
	
	printf("Super calculador de numeros impar ate 500 - 2000(doismil)\n");
	sleep(1);
	printf("Escolha a ordem:\n1 = Rapido\n0 = Devagar\nEscolha: ");
	scanf("%d", &escolha);
	
	switch (escolha){
		case 0:
			for (int i = 1; i <= 500; i++){
				if (i % 2 != 0){
					number = number + i;
					printf("o numero %d foi acrescentado no calculo, resultando: %d\n", i, number);
					sleep(1);
				}
			}
			break;
		case 1:
			for (int i = 1; i <= 500; i++){
				if (i % 2 != 0){
					number = number + i;
					printf("o numero %d foi acrescentado no calculo, resultando: %d\n", i, number);
					sleep(0);
				}
			}
			break;
		default:
			printf("Escolha invalida.\n");
			break;
	}
	printf("Portanto, todos os numeros impares ate 500 somados, resultam em: %d\n", number);
    return 0;
}
//Ne--o