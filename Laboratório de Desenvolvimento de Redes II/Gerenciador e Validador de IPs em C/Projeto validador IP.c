#include <stdio.h>
#include <stdlib.h>

// Mostra o menu principal
void mostrar_menu() {
    printf("\n=== MENU ===\n");
    printf("1. Criar arquivo de IPs\n");
    printf("2. Validador de classe IP\n");
    printf("0. Sair\n");
    printf("Escolha: ");
}

// Função para contar quantas linhas (IPs) já existem no arquivo
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

// Função para criar ou incluir IPs no arquivo
void criar_arquivo() {
    FILE *arquivo;
    char ip[100];
    int opcao, modo_escrita, linha_atual = 1;
    int linhas_existentes = contar_linhas_arquivo("ips.txt");

    // Se já existe o arquivo e tem IPs, pergunta ao usuário o que deseja fazer
    if (linhas_existentes > 0) {
        printf("\nJ� existem %d IP(s) no arquivo ips.txt.\n", linhas_existentes);
        printf("1. Criar novo arquivo (APAGA todos os IPs anteriores)\n");
        printf("2. Incluir novos IPs ao final do arquivo\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

        if (opcao == 1) {
            arquivo = fopen("ips.txt", "w"); // Sobrescreve tudo
            linha_atual = 1;
        } else if (opcao == 2) {
            arquivo = fopen("ips.txt", "a"); // Acrescenta ao final
            linha_atual = linhas_existentes + 1;
        } else {
            printf("Op��o inv�lida! Voltando ao menu...\n");
            return;
        }
    } else {
        // Se não tem arquivo, cria um novo
        arquivo = fopen("ips.txt", "w");
        linha_atual = 1;
    }

    if (arquivo == NULL) {
        printf("Erro ao abrir ou criar arquivo!\n");
        return;
    }

    // Laço para inserir novos IPs
    do {
        printf("\nLinha %d - Digite um IP: ", linha_atual);

        fgets(ip, sizeof(ip), stdin);

        // Remove o caractere de "nova linha" (\n) do final, caso exista
        int len = 0;
        while(ip[len] != '\0') {
            if(ip[len] == '\n') ip[len] = '\0';
            len++;
        }

        // Escreve o IP no arquivo, em uma nova linha
        fprintf(arquivo, "%s\n", ip);

        linha_atual++; // Pr�xima linha

        // Op��o de continuar ou sair
        printf("1. Incluir outro IP\n");
        printf("2. Salvar e voltar ao menu\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

    } while(opcao == 1);

    fclose(arquivo); // Fecha o arquivo depois de terminar
    printf("\nArquivo salvo como ips.txt\n");
}

// Função para ler o arquivo e dizer a classe de cada IP
void validar_arquivo() {
    FILE *arquivo;
    char linha[100];
    int primeiro_octeto, contador = 1;

    arquivo = fopen("ips.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo ips.txt n�o encontrado. Crie um arquivo primeiro.\n");
        return;
    }

    printf("\n--- Classes dos IPs ---\n");
    // Lê cada linha do arquivo até acabar
    while (fgets(linha, sizeof(linha), arquivo)) {
        // Remove o caractere de "nova linha" (\n) do final
        int len = 0;
        while(linha[len] != '\0') {
            if(linha[len] == '\n') linha[len] = '\0';
            len++;
        }
        // Pega o primeiro número do IP (antes do primeiro ponto)
        if (sscanf(linha, "%d", &primeiro_octeto) == 1) {
            printf("%2d. %-15s -> ", contador, linha);
            if (primeiro_octeto >= 1 && primeiro_octeto <= 126)
                printf("Classe A\n");
            else if (primeiro_octeto >= 128 && primeiro_octeto <= 191)
                printf("Classe B\n");
            else if (primeiro_octeto >= 192 && primeiro_octeto <= 223)
                printf("Classe C\n");
            else
                printf("Desconhecida\n");
        } else {
            printf("%2d. %-15s -> Desconhecida\n", contador, linha);
        }
        contador++;
    }
    fclose(arquivo);
}

// Função principal que executa o menu
int main() {
    int escolha;

    do {
        mostrar_menu();
        scanf("%d", &escolha);
        getchar(); // Limpa o buffer do teclado

        switch(escolha) {
            case 1:
                criar_arquivo();
                break;
            case 2:
                validar_arquivo();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Op��o inv�lida!\n");
        }
    } while(escolha != 0);

    return 0;
}

