#include <stdio.h>

int main() {
    // Declarando vari�veis
    int number1, number2, number3;

    // Entrada
    printf("Ordenador de numeros\nInforme o primeiro numero: ");
    scanf("%d", &number1);
    printf("Informe o segundo numero: ");
    scanf("%d", &number2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &number3);

    // Processamento e sa�da
    if (number1 <= number2 && number1 <= number3) {
        if (number2 <= number3) {
            printf("%d, %d, %d\n", number1, number2, number3);
        } else {
            printf("%d, %d, %d\n", number1, number3, number2);
        }
    } else if (number2 <= number1 && number2 <= number3) {
        if (number1 <= number3) {
            printf("%d, %d, %d\n", number2, number1, number3);
        } else {
            printf("%d, %d, %d\n", number2, number3, number1);
        }
    } else {
        if (number1 <= number2) {
            printf("%d, %d, %d\n", number3, number1, number2);
        } else {
            printf("%d, %d, %d\n", number3, number2, number1);
        }
    }
    return 0;
}
//Ne--o