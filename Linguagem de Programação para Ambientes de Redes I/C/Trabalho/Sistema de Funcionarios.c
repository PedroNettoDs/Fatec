#include <stdio.h>
#include <string.h>

#define MAX 5

// Definição da struct Pessoa
typedef struct {
    char nome[30];
    int idade;
    float salario;
} pessoa;

int main() {
    pessoa pessoas[MAX]; // Vetor para armazenar até 5 pessoas
    int i = 0;
    int n;
    
    FILE *arquivo;

    // Leitura dos dados do arquivo
    arquivo = fopen("arquivo.txt", "r");
    if (arquivo != NULL) {
        while (i < MAX && fscanf(arquivo, "%[^;];%d;%f\n", pessoas[i].nome, &pessoas[i].idade, &pessoas[i].salario) == 3) {
            i++;
        }
        fclose(arquivo);
    }

    int op = 1;
    while (op != 0) { // Menu
        system("cls"); // Mantido, pois você já estava usando
        printf("SISTEMA DE FUNCIONARIOS");
        printf("\n\n 1 - Listar");
        printf("\n 2 - Incluir");
        printf("\n 0 - Sair");
        printf("\n\nDigite a opcao: ");
        scanf("%d", &op);

        if (op == 1) { // Listar
            system("cls");
            printf("SISTEMA DE FUNCIONARIOS\n");
            printf("\nListar funcionarios:\n");

            for (n = 0; n < i; n++) {
                printf("\nNome: %s", pessoas[n].nome);
                printf("\nIdade: %d", pessoas[n].idade);
                printf("\nSalario: %.2f\n", pessoas[n].salario);
            }

            printf("\n\nDigite algo para voltar ao menu...");
            getchar(); getchar(); // Aguarda Enter

        } else if (op == 2) { // Incluir
            if (i < MAX) {
                system("cls");
                printf("SISTEMA DE FUNCIONARIOS");
                printf("\n\nIncluir funcionario:\n");

                printf("Insira o NOME: ");
                scanf("%s", pessoas[i].nome); // scanf com %s lê até espaço

                printf("Insira a IDADE: ");
                scanf("%d", &pessoas[i].idade);

                printf("Insira o SALARIO: ");
                scanf("%f", &pessoas[i].salario);

                // Salva no arquivo (modo append)
                arquivo = fopen("arquivo.txt", "a");
                if (arquivo != NULL) {
                    fprintf(arquivo, "%s;%d;%.2f\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].salario);
                    fclose(arquivo);
                } else {
                    printf("Erro ao abrir o arquivo para escrita.\n");
                }

                i++; // Incrementa o número de pessoas cadastradas
            } else {
                printf("Limite de funcionarios atingido (MAX = %d).\n", MAX);
            }

            printf("\n\nDigite algo para voltar ao menu...");
            getchar(); getchar(); // Aguarda Enter

        } else if (op == 0) { // Encerrar
            system("cls");
            printf("Sistema encerrado!\n");

        } else { // Opção inválida
            printf("Opcao invalida!");
            printf("\n\nDigite algo para voltar ao menu...");
            getchar(); getchar();
        }
    }

    return 0;
}

