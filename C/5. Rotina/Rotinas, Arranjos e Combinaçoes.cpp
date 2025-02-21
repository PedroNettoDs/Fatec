#include <stdio.h>

//Rotina subtração
int subtracao (int x, int y){
	return x-y;
}

//Rotina multiplicação
int multiplicacao (int x, int y){
	return x*y;
}

//Rotina divisão
int divisao (int x, int y){
	return x/y;
}

//Rotina fatorial
int fatorial (int x) {
	int i, f = 1;
	for (i=1; i<=x; i++){
		f = f * i;
	}
	return f;
}

//Rotina arranjo
int arranjo (int m, int p) {
	if (m < p){
		return 0;
	} else{
	return divisao(fatorial(m), fatorial(subtracao(m,p)));
	}
}

//Rotina combinação
int combinacao (int m, int p) {
	if (m < p){
		return 0;
	} else {
	return divisao(fatorial(m), multiplicacao(fatorial(p),fatorial(subtracao(m,p))));
	}
}

int main ()
{
	int m, p, a, c;
	printf("Informe o M: ");
	scanf("%d", &m);
	printf("Informe o P: ");
	scanf("%d", &p);
	a = arranjo(m, p);
	c = combinacao(m,p);
	printf("A quantidade de arranjos equivalem a: %d \n", a);
	printf("A quantidade de combinacoes equivalem a: %d", c);	
}
