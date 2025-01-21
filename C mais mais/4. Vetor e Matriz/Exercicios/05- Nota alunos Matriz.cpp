#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int notas[10][3];
    int menorProva[10]; 
    int i, j, escolha, continuar;
    int contP1 = 0, contP2 = 0, contP3 = 0;
    srand(time(0));

    printf("Calculo de notas de alunos\nVoce gostaria de informar(1) ou simular(0) as notas\n\nR:");
    scanf("%d", &escolha);

    do {
        switch (escolha) {
            case 1:
                for (i = 0; i < 10; i++) {
                    printf("Informe as notas do aluno %d:\n", i + 1);
                    for (j = 0; j < 3; j++) {
                        printf("Prova %d: ", j + 1);
                        scanf("%d", &notas[i][j]);
                    }
                }
                break;
            case 0:
                for (i = 0; i < 10; i++) {
                    for (j = 0; j < 3; j++) {
                        notas[i][j] = rand() % 10;
                        printf("n[%d][%d]: %d \n", i, j, notas[i][j]);
                        sleep(1);
                    }
                }
                break;
            default:
                printf("Escolha invalida!\n");
                continue;
        }

        contP1 = 0, contP2 = 0, contP3 = 0;

        for (i = 0; i < 10; i++) {
            int menorNota = notas[i][0];
            menorProva[i] = 1;
            for (j = 1; j < 3; j++) {
                if (notas[i][j] < menorNota) {
                    menorNota = notas[i][j];
                    menorProva[i] = j + 1;
                }
            }
            if (menorProva[i] == 1) contP1++;
            else if (menorProva[i] == 2) contP2++;
            else if (menorProva[i] == 3) contP3++;
        }

        // Relatório
        printf("\nRelatorio:\n");
        for (i = 0; i < 10; i++) {
            printf("Aluno %d teve a menor nota na Prova %d\n", i + 1, menorProva[i]);
        }
        printf("\nQuantidade de alunos com menor nota em cada prova:\n");
        printf("Prova 1: %d alunos\n", contP1);
        printf("Prova 2: %d alunos\n", contP2);
        printf("Prova 3: %d alunos\n", contP3);

        printf("Tentar novamente? (1 = Sim, 0 = Nao): ");
        scanf("%d", &continuar);
        printf("\n\n");

    } while (continuar == 1);

    printf("Obrigado!\n");
    return 0;
}

