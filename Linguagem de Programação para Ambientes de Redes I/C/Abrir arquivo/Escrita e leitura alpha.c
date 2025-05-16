#include <stdio.h>
main (){
	FILE *arquivo;
	char escolha, continuar, nome[100], palavras[100], linha[100];
	int idade, contador = 1;;
	float salario;
	
	printf("Criador de lista de funcionarios\nDeseja criar um arquivo(c) ou ler um arquivo(l): \n");
	escolha = getchar(); //captura o caracter
	fflush(stdin);
	
	switch (escolha) {
		case 'l': //Leitura
			arquivo = fopen("arquivo.txt", "r");
    		if(arquivo != NULL){
    			while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        			printf("%s", linha);
    			}
    		fclose(arquivo);
			}else{
				printf("Erro ao abrir o arquivo para leitura.\n");
			}
		break;
		
		case 'c': //criar
		if (arquivo != NULL) {
			while (continuar != 'n'){ 
				system("cls"); 
				printf("\nInsira o NOME do funcionario %d: ", contador);
				scanf("%[^\n]s", &nome);
				printf("Insira a IDADE do funcionario %d: ", contador);
				scanf("%i", &idade);
				printf("Insira o SALARIO do funcionario %d: ", contador);
				scanf("%f", &salario);
				
				fprintf(arquivo, "%s;%i;%.2f\n", nome, idade, salario);
			
				fflush(stdin);
				
				printf("\nDeseja colocar outra palavra?");
				scanf("%c", &continuar);
				
				contador++;
				fflush(stdin);
			} 
		} else {
			printf("Erro ao abrir o arquivo para escrita.\n");
		}
			
		break;
	}
} //main
//netto
