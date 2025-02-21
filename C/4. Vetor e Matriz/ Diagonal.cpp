#include <stdio.h>

int main() {
    int mat[100][100], l, c, i, j, soma;
    printf("Soma abaixo diagonal + diagonal principal\nInforme a quantidade de linhas da Matriz: ");
    scanf("%d", &l);
    while (l > 100) {
        printf("A quantidade da matriz precisa ser menor que cem (<=100): ");
        scanf("%d", &l);
    }
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &c);
    while (c > 100) {
        printf("A quantidade da matriz precisa ser menor que cem (<=100): ");
        scanf("%d", &c);
    }
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("Mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    soma = 0;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (i >= j) {
                soma = soma + mat[i][j];
            }
        }
    }
    printf("Soma = %d\n", soma);
    return 0;
}
//Ne--o