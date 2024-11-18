#include <stdio.h>

int main (){
	//declarando
    int number1, number2;

	//entrada
    printf("Super ordenador de numeros 2000%\nInsira seu primeiro numero: ");
    scanf("%d", &number1);  
    printf("Insira seu segundo numero: ");
    scanf("%d", &number2);  

	//processamento
    if (number1 < number2) {
        printf("O maior numero e: %d\n", number2); 
    } else {
        printf("O maior numero e: %d\n", number1); 
    }

    return 0;
}
//Ne--o