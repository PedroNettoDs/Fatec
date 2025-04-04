#include <stdio.h>

int main() {
    int v[20], n, i, soma, somatoria = 0;
    printf("Soma dos elementos de Matriz\nInforme a quantidade de elementos da Matriz: ");
    scanf("%d", &n);
    while (n > 20) {
        printf("A quantidade da matriz precisa ser menor que vinte (<=20): ");
        scanf("%d", &n);
    }
    for (i = 0; i < n; i++) {
        printf("N%d: ", i);
        scanf("%d", &v[i]);
    }
    for (soma = 0; soma < n; soma++) {
        somatoria = somatoria + v[soma];
    }
    printf("A somatoria da matriz: %d\n", somatoria);
    return 0;
}
//Ne--o