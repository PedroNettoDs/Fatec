#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define QTDL 20
//Ne--o

int main() {
    int i, p, continuar, posicao[QTDL];
    char a[QTDL], escolha;
    srand(time(0));

    do {
        fflush (stdin);
        p = 0;
        printf("Encontrador de caracteres em vetores\nPrimeiro, serao gerados caracteres aleatorios (pressione Enter).\n");
        while ((getchar()) != '\n');
        sleep(2);
        printf("Agora informe o caractere que deseja encontrar (minuscula): ");
        scanf("%c", &escolha);
        
        sleep(1);
        for (i = 0; i < QTDL; i++) {
            a[i] = (rand() % 26) + 'a';
            printf("n[%d]: %c \n", i, a[i]);
            if (a[i] == escolha) {
                posicao[p] = i;
                p++;
            }
        }
        sleep(3);
        if (p > 0) {
            printf("\n\nO caractere '%c' apareceu nas seguintes posicoes:\n", escolha);
            for (i = 0; i < p; i++) {
                printf("Posicao: %d\n", posicao[i]);
            }
        } else {
            printf("\n\nO caractere '%c' nao apareceu :(\n", escolha);
        }
        printf("\nTentar novamente? (1 = Sim, 0 = Nao): ");
        scanf("%d", &continuar);
        printf("\n\n");
    } while (continuar == 1);
    printf("Obrigado!\n");
    return 0;
}
//Ne--o
