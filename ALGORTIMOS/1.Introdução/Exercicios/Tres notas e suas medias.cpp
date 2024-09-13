#include <stdio.h>

int main()
{
    // Declarando variáveis
    float nota1, nota2, nota3, media;

    // Entrada de dados
    printf("Insira as três notas: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    // Processamento
    nota1 = nota1 * 0.3;
    nota2 = nota2 * 0.3;
    nota3 = nota3 * 0.4;
    media = nota1 + nota2 + nota3;

    // Saída
    printf("A média ponderada das notas é %f\n", media);
    return 0;
}

