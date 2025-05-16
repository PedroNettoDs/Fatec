#include <stdio.h>
main(){
	FILE *arquivo;
    char linha[100];
    arquivo = fopen("arquivo.txt", "r");
    if(arquivo != NULL){
    	while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        	printf("%s", linha);
    	}
    	fclose(arquivo);
	}else{
		printf("Erro ao abrir o arquivo para leitura.\n");
	}
}
