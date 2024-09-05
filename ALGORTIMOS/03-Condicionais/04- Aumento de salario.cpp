#include <stdio.h>

main (){
	//declarando variaveis
	int funcao;
	float salario;
	
	//informativo
	printf ("Reajuste de salario%\nCargos:%\n 1 - Escrituario%\n 2 - Secretaria%\n 3 - Caixa%\n 4 - Gerente%\n 5 - Diretor%\nInforme o digito do seu cargo: ");
	//entrada
	scanf ("%d", &funcao);
	printf ("Informe o seu salario atual: R$");
	scanf ("%f", &salario);
	printf ("segundo a correcao salarial.%\n");
	//processamento
	switch (funcao){
		case 1:
			salario = salario * 1.5;
			printf ("seu salario foi atualizado pra: R$ = %.2f\n", salario);
		break;
		case 2:
			salario = salario * 1.35;
			printf ("seu salario foi atualizado pra: R$ = %.2f\n", salario);
		break;
		case 3:
			salario = salario * 1.2;
			printf ("seu salario foi atualizado pra: R$ = %.2f\n", salario);
		break;
		case 4:
			salario = salario * 1.1;
			printf ("seu salario foi atualizado pra: R$ = %.2f\n", salario);
		break;
		case 5:
			printf ("seu salario não foi atualizado");
		break;
	}
}
