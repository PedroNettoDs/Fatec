#include <stdio.h>

int main()
{
    int i, j, qd1, qd2, d1[100], d2[100];
    printf ("Encontrador de alunos em duas disciplinas\nInforme a quantidade de alunos na Disciplina 1: ");
    scanf ("%d", &qd1);
    for (i = 0; i < qd1; i++) {
        printf ("ID do aluno %d: ", i);
        scanf ("%d", &d1[i]);
    }
    printf("\nInforme a quantidade de alunos na Disciplina 2: ");
    scanf("%d", &qd2);
    for (j = 0; j < qd2; j++) {
        printf ("ID do aluno %d: ", j);
        scanf ("%d", &d2[j]);
    }
    for (i = 0; i < qd1; i++) {
        for (j = 0; j < qd2; j++) {
            if (d1[i] == d2[j]) {
                printf("\nO aluno %d esta cursando as 2 disciplinas\n", d1[i]);
            }
        }
    }
    return 0;
}

