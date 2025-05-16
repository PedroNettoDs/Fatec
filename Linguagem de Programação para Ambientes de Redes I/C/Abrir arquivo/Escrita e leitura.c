#include <stdio.h>
#include <string.h>

#define MAX 3

main (){
	//estrutura de pessoa
	typedef struct{
		char nome[30];
		int idade;
		float salario;
	} pessoa;

	//definição variável
	pessoas = pessoa;
	FILE *arquivo;
	char escolha, linha[100];
	int i;
		
	//menu
	printf("-=-=-=-=-= Lista de funcionarios -=-=-=-=-=\nDeseja: Criar(c) - Ler(l) - Editar(e)\nEscolha: ");
	escolha = getchar();
	fflush(stdin);
	
	//escolha
	switch (escolha) {
					case 'l': //Leitura
						    arquivo = fopen("arquivo.txt", "r");
			    if(arquivo != NULL){
			    	while (fgets(linha, sizeof(linha), arquivo) != NULL) {
			        	printf("%s", linha);
			    	}
			    	while (!feof(arquivo)) {
			            fscanf(arquivo, "%[^;];%d;%f", pessoa[i].nome, &pessoa[i].idade, &pessoa[i].salario); 
			            printf("\nNome: %s", nome);
			            printf("\nIdade: %d", idade);
			            printf("\nSalario: %.2f\n", salario);  
						fgets(linha, sizeof(linha), arquivo);
			        }
			    	fclose(arquivo);
				}else{
					printf("Erro ao abrir o arquivo para leitura.\n");
				}
			}
		break;
		
		case 'c': //criar
		    arquivo = fopen("arquivo.txt", "w");
		    if (arquivo != NULL) {
		        while (continuar != 'n'){ 
		        	//cadastro dos dados
		        	printf("Cadastro de %d pessoas:\n", MAX);
		        	for (i = 0; i < MAX; i++) {
		        		printf("\nInsira o NOME do funcionario %d: ", contador);
			            scanf(" %[^\n]", pessoa[i].nome); fflush(stdin);
			            printf("Insira a IDADE do funcionario %d: ", contador);
			            scanf("%i", &pessoa[i].idade); fflush(stdin);
			            printf("Insira o SALARIO do funcionario %d: ", contador);
			            scanf("%f", &pessoa[i].salario); fflush(stdin);
					}
					
					if (i == 0){
						i = 1;
						fprintf(arquivo, "%i;%s;%i;%.2f", contador, nome, idade, salario);
					}else{
						fprintf(arquivo, "%i;%s;%i;%.2f\n", contador, nome, idade, salario);
					}
		            
		            
		            printf("\nDeseja inserir outro funcionario? (s/n): ");
		            scanf(" %c", &continuar);
		            fflush(stdin);
		            contador++;
		        } 
		        fclose(arquivo);
		    } else {
		        printf("Erro ao abrir o arquivo para escrita.\n");
		    }
		break;
		
		case 'e': //editar
			arquivo = fopen("arquivo.txt", "a");
		    if (arquivo != NULL) {
		        while (continuar != 'n'){
		            system("cls");
		            
		            printf("\nInsira o NOME do funcionario %d: ", contador);
		            scanf(" %[^\n]", nome); fflush(stdin);
		            printf("Insira a IDADE do funcionario %d: ", contador);
		            scanf("%i", &idade); fflush(stdin);
		            printf("Insira o SALARIO do funcionario %d: ", contador);
		            scanf("%f", &salario); fflush(stdin);
		
		            fprintf(arquivo, "%i;%s;%i;%.2f\n", contador, nome, idade, salario);
		            
		            printf("\nDeseja inserir outro funcionario? (s/n): ");
		            scanf(" %c", &continuar);
		            fflush(stdin);
		            contador++;
		        } 
		        fclose(arquivo);
		    } else {
		        printf("Erro ao abrir o arquivo para escrita.\n");
		    }
		
		break;
	}
} //main
//netto
