#include <stdio.h>

int main() {
    // declarando vari�veis
    int number;
    
    // entrada
    printf("Detector de numeros 2000\nInforme um numero: ");
    scanf("%d", &number);
    printf("Processando...\n");
    
    // processamento
    if (number > 0) {
        printf("O numero e maior que 0\n");
    } else if (number == 0) {
        printf("O numero e igual a 0\n");
    } else {
        printf("O numero e menor que 0\n");
    }
    return 0;
}
//Ne--o