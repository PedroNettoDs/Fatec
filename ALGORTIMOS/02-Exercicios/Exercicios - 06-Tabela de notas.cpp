#include <stdio.h>

int main()
{
    // Declarando variáveis
    char aluno1[50], aluno2[50], aluno3[50];
    int nota1, nota2, nota3;

    // Entrada
	//aluno1
    printf("Insira o nome do primeiro aluno: \n");
    scanf("%s", aluno1);
    
    printf("Insira a nota do primeiro aluno: \n");
    scanf("%d", &nota1);
    
	//aluno2
    printf("Insira o nome do segundo aluno: \n");
    scanf("%s", aluno1);
    
    printf("Insira a nota do segundo aluno: \n");
    scanf("%d", &nota1);

	//aluno3
    printf("Insira o nome do terceiro aluno: \n");
    scanf("%s", aluno1);
    
    printf("Insira a nota do terceiro aluno: \n");
    scanf("%d", &nota1);

    // Saída
    printf("Os alunos sao: \n");
    printf("%s: %d\n", aluno1, nota1);
    printf("%s: %d\n", aluno2, nota2);
    printf("%s: %d\n", aluno3, nota3);
    return 0;
}
