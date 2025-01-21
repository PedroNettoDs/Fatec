#include <stdio.h>

int main()
{
	//Declarando variaveis
	float mp, mt, me, mf;
	
	//Entrada de dados
	printf ("Insira a media de prova: ");
	scanf ("%f", &mp);
	printf ("Insira a media de trabalho: ");
	scanf ("%f", &mt);
	printf ("Insira a media do exame: ");
	scanf ("%f", &me);
	
	//Processamento
	mp = mp * 0.7;
	mt = mt * 0.3;
	me = me * 0.1;
	mf = mp + mt + me;
	
	//Saida
	printf("A media final e %f", mf);
    return 0;
}
//Ne--o