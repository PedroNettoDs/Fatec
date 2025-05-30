#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5

// Definição da struct Pessoa
typedef struct {
    char nome[30];
    int idade;
    float salario;
} pessoa;

int main() {
    pessoa pessoas[MAX]; // Vetor para armazenar até 5 pessoas
    int i = 0, n, esc;
    FILE *arquivo;

    // Leitura dos dados do arquivo
    arquivo = fopen("arquivo.txt", "r");
    if (arquivo != NULL) {
        while (i < MAX && fscanf(arquivo, "%[^;];%d;%f\n", pessoas[i].nome, &pessoas[i].idade, &pessoas[i].salario) == 3) {
            i++;
        }
        fclose(arquivo);
    } else {
        printf("Arquivo não encontrado. Será criado ao salvar novos dados.\n\n");
    }

    int op = 1;
    while (op != 0) { // Menu
        system("cls");
        printf("SISTEMA DE FUNCIONARIOS");
        printf("\n\n 1 - Listar");
        printf("\n 2 - Incluir");
        printf("\n 3 - Alterar");
        printf("\n 0 - Sair");
        printf("\n\nDigite a opcao: ");
        scanf("%d", &op);

        if (op == 1) { // Listar
            system("cls || clear");
            printf("SISTEMA DE FUNCIONARIOS\n");
            printf("\nListar funcionarios:\n");

            for (n = 0; n < i; n++) {
                printf("\nFuncionario #%d", n + 1);
                printf("\nNome: %s", pessoas[n].nome);
                printf("\nIdade: %d", pessoas[n].idade);
                printf("\nSalario: %.2f\n", pessoas[n].salario);
            }

            printf("\n\nPressione Enter para voltar ao menu...");
            while (getchar() != '\n'); // limpa buffer
            getchar();

        } else if (op == 2) { // Incluir
            if (i < MAX) {
                system("cls || clear");
                printf("SISTEMA DE FUNCIONARIOS");
                printf("\n\nIncluir funcionario:\n");

                printf("Insira o NOME: ");
                while (getchar() != '\n'); // limpa buffer
                scanf(" %[^\n]", pessoas[i].nome);

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

            printf("\n\nPressione Enter para voltar ao menu...");
            while (getchar() != '\n');
            getchar();

        } else if (op == 3) { // Alterar
            system("cls || clear");
            printf("SISTEMA DE FUNCIONARIOS\n");
            printf("\nAlterar funcionarios:\n");

            printf("\nInforme o numero do funcionario (1 a %d): ", i);
            scanf("%d", &esc);
            esc = esc - 1;

            if (esc >= 0 && esc < i) {
                printf("\nFuncionario atual:");
                printf("\nNome: %s", pessoas[esc].nome);
                printf("\nIdade: %d", pessoas[esc].idade);
                printf("\nSalario: %.2f\n", pessoas[esc].salario);

                printf("\n------------ Alterar ------------\n");
                printf("Insira o NOVO NOME: ");
                while (getchar() != '\n');
                scanf(" %[^\n]", pessoas[esc].nome);

                printf("Insira a NOVA IDADE: ");
                scanf("%d", &pessoas[esc].idade);

                printf("Insira o NOVO SALARIO: ");
                scanf("%f", &pessoas[esc].salario);

                // Reescreve o arquivo com todos os dados atualizados
                arquivo = fopen("arquivo.txt", "w");
                if (arquivo != NULL) {
                    for (n = 0; n < i; n++) {
                        fprintf(arquivo, "%s;%d;%.2f\n", pessoas[n].nome, pessoas[n].idade, pessoas[n].salario);
                    }
                    fclose(arquivo);
                } else {
                    printf("Erro ao abrir o arquivo para sobrescrever.\n");
                }

            } else {
                printf("Funcionario invalido.\n");
            }

            printf("\n\nPressione Enter para voltar ao menu...");
            while (getchar() != '\n');
            getchar();

        } else if (op == 0) { // Encerrar
            system("cls || clear");
            printf("Sistema encerrado!\n");

        } else { // Opção inválida
            printf("Opcao invalida!");
            printf("\n\nPressione Enter para voltar ao menu...");
            while (getchar() != '\n');
            getchar();
        }
    }

    return 0;
}
