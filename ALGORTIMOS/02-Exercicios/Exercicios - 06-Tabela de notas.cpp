#include <stdio.h>

int main()
{
    // Declarando variáveis
    char aluno1[50], aluno2[50], aluno3[50];
    int nota1, nota2, nota3;

    // Entrada
    printf("Insira o nome e nota do primeiro aluno: \n");
    scanf("%s %d", aluno1, &nota1);

    printf("Insira o nome e nota do segundo aluno: \n");
    scanf("%s %d", aluno2, &nota2);

    printf("Insira o nome e nota do terceiro aluno: \n");
    scanf("%s %d", aluno3, &nota3);

    // Saída
    printf("Os alunos sao: \n");
    printf("%s: %d\n", aluno1, nota1);
    printf("%s: %d\n", aluno2, nota2);
    printf("%s: %d\n", aluno3, nota3);
    return 0;
}
