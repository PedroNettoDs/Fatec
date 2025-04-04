#include <stdio.h>

int positivo(int nro) {
    if (nro > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main ()
{
	int nro;
	printf ("Insira o numero: ");
	scanf ("%d", &nro);
	
	if (positivo(nro)) {
		printf ("Positivo");
	} else {
		printf ("Nao positivo"); 
	}
}
