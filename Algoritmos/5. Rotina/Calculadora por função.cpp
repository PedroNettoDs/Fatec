#include <stdio.h>

int calculo(int n1, int n2) {
    int resultado = n1 + n2;
    return resultado;
}

int main() {
    int n1, n2;
    printf("Calculadora com rotina\nInsira o primeiro valor: ");
    scanf("%d", &n1);

    printf("Insira o segundo valor: ");
    scanf("%d", &n2);

    printf("O resultado : %d\n", calculo(n1, n2));
    return 0;
}
