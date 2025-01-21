#include <stdio.h>

int main()
{
	//Declarando variaveis
	float nota1, nota2, media;
	
	//Entrada de dados
	printf ("Insira a primeira nota: ");
	scanf ("%f", &nota1);
	printf ("Insira a segunda nota: ");
	scanf ("%f", &nota2);
	
	//Processamento
	nota1 = nota1 * 0.6;
	nota2 = nota2 * 0.4;
	media = nota1 + nota2;
	
	//Saida
	printf("A media poderada das notas sao %f", media);
    return 0;
}
//Ne--o