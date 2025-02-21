#include <stdio.h>

main (){
	//declarando variavel
	int escolha, number1, number2;
	
	//entrada
	printf ("Ordenador de numeros%\nEscolha a ordem:%\n1 = crescente %\n0 = decrescente %\nEscolha: ");
	scanf ("%d", &escolha);
	printf ("Informe o primeiro numero: ");
	scanf ("%d", &number1);
	printf ("informe o segundo numero: ");
	scanf ("%d", &number2);
	
	//processamentos
	switch (escolha) {
		case 0:
			if (number1 > number2) {
				printf ("%d, %d, Ordenado por decrescente", number1, number2);
			} else {
				printf ("%d, %d, Ordenado por decrescente", number2, number1);
			}
		break;
		case 1:
			if (number1 > number2) {
				printf ("%d, %d, Ordenado por crescente", number2, number1);
			} else {
				printf ("%d, %d, Ordenado por crescente", number1, number2);
			}
		break;
	}
    return 0;
}
//Ne--o