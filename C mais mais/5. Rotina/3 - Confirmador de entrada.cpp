#include <stdio.h>
#include <ctype.h>

void validaEntrada(char *ent) {
    char aux;
    do {
        printf("Deseja confirmar esse nome (s/n): ");
        scanf(" %c", &aux);
        aux = tolower(aux); 
    } while (aux != 's' && aux != 'n');
    *ent = aux;
}

int main ()
{
	char entrada, nome[100];
	printf ("Registrador de nomes\nInforme seu nome: ");
	scanf ("%s", &nome);
	fflush (stdin);
	char ent;
    validaEntrada(&ent);
return 0;
}
