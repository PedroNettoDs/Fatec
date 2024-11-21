#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define QTDL 30
//Ne--0

int main() {
    int i;
    char lista[QTDL];
    srand(time(0));

    printf("Encontrador e substituidor de Vogais:\n");
    sleep(1);
    printf("Gerando letras aleatorias...\n\n");
    sleep(1);
    
    for (i = 0; i < QTDL; i++) {
    	lista[i] = (rand() % 26) + 'a';
    }

    printf("Sequencia original:\n");
    for (i = 0; i < QTDL; i++) {
        printf("%c", lista[i]);
    }
    printf("\n");

    for (i = 0; i < QTDL; i++) {
        switch (lista[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                lista[i] = '@';
                break;
        }
    }
	sleep(2);
    printf("\nSequencia modificada:\n");
    for (i = 0; i < QTDL; i++) {
        printf("%c", lista[i]);
    }
    printf("\n");

    return 0;
}
//Ne--0
