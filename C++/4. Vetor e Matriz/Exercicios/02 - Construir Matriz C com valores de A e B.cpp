#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//Ne--o

int main() {
    //declarando
    int a[20], b[30], c[50], soma, i, escolha;
    srand(time(0));

    //apresentacao e escolha
    printf("Construir Matriz C com 50 elementos com valores de A e B\nObservacao: A tem 20 Elementos, B tem 30\n\n");
    sleep(2);
    printf("Gostaria de informar os elementos da Matriz A:\nManualmente(1)\nAleatoriamente(0)\n\nR:");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            for (i = 0; i < 20; i++) {
                printf("A[%d]: ", i);
                scanf("%d", &a[i]);
            }
            break;
        case 0:
            for (i = 0; i < 20; i++) {
                a[i] = rand() % 100;
                printf("n[%d]: %d \n", i, a[i]);
            }
            break;
    }

    sleep(2);
    printf("\n\nGostaria de informar os elementos da Matriz B:\nManual (1)\nAleatoriamente (0)\n\nR:");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            for (i = 0; i < 30; i++) {
                printf("B[%d]: ", i);
                scanf("%d", &b[i]);
            }
            break;
        case 0:
            for (i = 0; i < 30; i++) {
                b[i] = rand() % 100;
                printf("n[%d]: %d \n", i, b[i]);
            }
            break;
    }

    //saida
    printf("\nProcessando a Matriz C\n");
    sleep(2);
    printf("\nMatriz C:\n");

    for (soma = 0; soma < 20; soma++) {
        c[soma] = a[soma];
        printf("n[%d]: %d \n", soma, c[soma]);
    }
    for (soma = 20; soma < 50; soma++) {
        c[soma] = b[soma - 20];
        printf("n[%d]: %d \n", soma, c[soma]);
    }

    return 0;
}
//Ne--o
