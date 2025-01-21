#include <stdio.h>

void inc (int *x){
	*x = *x + 1;
}

void dec (int *x){
	*x = *x - 1;
}

int main ()
{
	int a;
	
	printf ("Informe o valor de A: ");
	scanf ("%d", &a);
		inc(&a);
		printf ("O Valor acrecentado %d\n", a);

	printf ("Informe o valor de A: ");
	scanf ("%d", &a);
		dec(&a);
		printf ("O Valor removido %d\n", a);
	
	return 0;
}
