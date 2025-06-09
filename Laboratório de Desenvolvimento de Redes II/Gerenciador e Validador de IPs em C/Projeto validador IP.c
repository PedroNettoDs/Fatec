#include <stdio.h>
#include <stdlib.h>

// Mostra o menu principal
void mostrar_menu() {
    printf("\n=== MENU ===\n");
    printf("1. Exibir IPs do arquivo\n");
    printf("2. Incluir IPs\n");
    printf("3. Validador de classe IP\n");
    printf("0. Sair\n");
    printf("Escolha: ");
}

// Funcao para contar quantas linhas (IPs) já existem no arquivo
int contar_linhas_arquivo(const char* nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    int linhas = 0;
    char buffer[100];
    if (arquivo == NULL)
        return 0;
    while (fgets(buffer, sizeof(buffer), arquivo))
        linhas++;
    fclose(arquivo);
    return linhas;
}

// Funcao para criar ou incluir IPs no arquivo
void criar_arquivo() {
    FILE *arquivo;
    char ip[100];
    int opcao, modo_escrita, linha_atual = 1;
    int linhas_existentes = contar_linhas_arquivo("ips.txt");

    // Se existe o arquivo e tem IPs, pergunta ao usuario o que deseja fazer
    if (linhas_existentes > 0) {
        printf("\nJa existem %d IP(s) no arquivo ips.txt.\n", linhas_existentes);
        printf("1. Criar novo arquivo (APAGA todos os IPs anteriores)\n");
        printf("2. Incluir novos IPs\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {
            arquivo = fopen("ips.txt", "w"); // apaga
            linha_atual = 1;
        } else if (opcao == 2) {
            arquivo = fopen("ips.txt", "a"); // incluir
            linha_atual = linhas_existentes + 1;
        } else {
            printf("Escolha invalida, Voltando ao menu...\n");
            return;
        }
    } else {
        // se nao tem arquivo, cria um novo
        arquivo = fopen("ips.txt", "w");
        linha_atual = 1;
    }

    if (arquivo == NULL) {
        printf("Erro ao abrir ou criar arquivo!\n");
        return;
    }

    // Loop para inserir novos IPs
    do {
        printf("\nLinha %d - Digite um IP: ", linha_atual);
        fgets(ip, sizeof(ip), stdin);
        
        // Remove o caractere de "nova linha" (\n) do final, caso exista
        int len = 0;
        while(ip[len] != '\0') {
            if(ip[len] == '\n') ip[len] = '\0';
            len++;
        }
        
        // Escreve o IP no arquivo
        fprintf(arquivo, "%s\n", ip);
        linha_atual++; 
        // Continuar ou sair
        printf("1. Incluir outro IP\n");
        printf("2. Salvar e voltar ao menu\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

    } while(opcao == 1);
    fclose(arquivo); // Fecha o arquivo depois de terminar
    printf("\nArquivo salvo como ips.txt\n");
}

// Funcao para ler o arquivo, classificar os IPs e sobrescreve-los com suas classes
void validar_arquivo() {
    FILE *arquivo_leitura, *arquivo_saida;
    char linha[100];
    int primeiro_octeto;

    arquivo_leitura = fopen("ips.txt", "r");
    if (arquivo_leitura == NULL) {
        printf("Arquivo ips.txt nao encontrado. Crie um arquivo primeiro.\n");
        return;
    }

    arquivo_saida = fopen("ips-validados.txt", "w");
    if (arquivo_saida == NULL) {
        printf("Erro ao criar arquivo de saida.\n");
        fclose(arquivo_leitura);
        return;
    }

    while (fgets(linha, sizeof(linha), arquivo_leitura)) {
        // Remove newline
        int len = 0;
        while (linha[len] != '\0') {
            if (linha[len] == '\n') linha[len] = '\0';
            len++;
        }

        // Extrair o primeiro octeto
        if (sscanf(linha, "%d", &primeiro_octeto) == 1) {
            if (primeiro_octeto >= 1 && primeiro_octeto <= 126) {
                fprintf(arquivo_saida, "%s - Classe A\n", linha);
            } else if (primeiro_octeto >= 128 && primeiro_octeto <= 191) {
                fprintf(arquivo_saida, "%s - Classe B\n", linha);
            } else if (primeiro_octeto >= 192 && primeiro_octeto <= 223) {
                fprintf(arquivo_saida, "%s - Classe C\n", linha);
            } else {
                fprintf(arquivo_saida, "%s - Classe Desconhecida\n", linha);
            }
        }
    }

    fclose(arquivo_leitura);
    fclose(arquivo_saida);

    printf("\nArquivo criado: ips-validados.txt com as classes dos IPs.\n");
}

// Funcao para exibir os IPs do arquivo ips.txt
void exibir_ips() {
    FILE *arquivo;
    char linha[100];

    arquivo = fopen("ips.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo ips.txt nao encontrado.\n");
        return;
    }

    printf("\n=== IPs no arquivo ===\n");
    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha);
    }
    fclose(arquivo);
}

int main() {
    int escolha;

    do {
        mostrar_menu();
        scanf("%d", &escolha);
        getchar();

        switch (escolha) {
            case 1:
            	exibir_ips();
                break;
            case 2:
            	criar_arquivo();
                break;
            case 3:
				validar_arquivo();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Escolha invalida!\n");
        }
    } while (escolha != 0);

    return 0;
}