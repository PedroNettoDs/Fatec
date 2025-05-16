#include <stdio.h>
main (){
	FILE *arquivo;
	char palavras[100];
	char continuar;
	int contador = 1;
	
	arquivo = fopen("arquivo.txt", "w");
	if (arquivo != NULL) {
		while (continuar != 'n'){ 
			system("cls"); //LIMPAR A TELA DO TERMINAL
			printf("\nInsira o texto da linha %d: ", contador);
			scanf("%[^\n]s", &palavras);
			
			fprintf(arquivo, "%s\n", palavras);
		
			fflush(stdin);
			printf("\nDeseja colocar outra palavra?");
			scanf("%c", &continuar);
			contador++;
			fflush(stdin);
		} 
	} else {
		printf("Erro ao abrir o arquivo para escrita.\n");
	}
	
	fclose (arquivo);
}
