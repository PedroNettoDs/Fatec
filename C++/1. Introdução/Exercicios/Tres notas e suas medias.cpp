#include <stdio.h>

int main()
{
    // Declarando vari�veis
    float nota1, nota2, nota3, media;

    // Entrada de dados
    printf("Insira as tr�s notas: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    // Processamento
    nota1 = nota1 * 0.3;
    nota2 = nota2 * 0.3;
    nota3 = nota3 * 0.4;
    media = nota1 + nota2 + nota3;

    // Sa�da
    printf("A m�dia ponderada das notas � %f\n", media);
    return 0;
}
//Ne--o