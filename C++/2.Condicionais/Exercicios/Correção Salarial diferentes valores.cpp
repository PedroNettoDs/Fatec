#include <stdio.h>

int main() {
    // declarar
    float salario;
    
    // entrada
    printf("Reajuste de salario\nInsira seu salario atual: R$ ");
    scanf("%f", &salario);
    
    // processa
    if (salario < 1000) {
        salario = salario * 1.20; // 20% de aumento
        printf("Seu salario atualizado: R$ %.2f\n", salario);
    } else if (salario >= 1000 && salario <= 5000) { // Corre��o aqui
        salario = salario * 1.10; // 10% de aumento
        printf("Seu salario atualizado: R$ %.2f\n", salario);
    } else if (salario > 5000) {
        printf("Voce nao teve aumento\n");
    }
    
    return 0;
}
//Ne--o