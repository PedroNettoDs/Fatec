#include <stdio.h>

int main (){
	//declarando
	int x, loop, divisor;
	float s, f;
	
	loop = 1;
	divisor = 1;
	s = 1;
	
	printf ("Contador de S + divisao de X 2000 (doismil)%\n");
	printf ("Insira o valor de X: ");
	scanf ("%d", &x);
	
	//repetição
	do {
		s = s + (x / divisor);
		loop++;
		divisor++;
	} while (loop <= 15);
	printf ("O resultado de S + Divisao de X aos 15 primeiros termos: %f", s);
}