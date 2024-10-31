#include <stdio.h>

int main (){
	//declarando
	int n, loop, divisor;
	float s, f;
	
	f = 1;
	loop = 1;
	divisor = 1;
	s = 1;
	
	printf ("Contador de numero + divisao da fatorizacao 2000 (doismil)%\n");
	printf ("Insira o valor de N: ");
	scanf ("%d", &n);
	
	//repetição
	do {
		f =  f * loop;
		s = s + (1 / f);
		loop++;
	} while (loop <= n);
	printf ("A soma de todos de S + Divisao da fatorizacao ate %d : %f", n, s);
}
