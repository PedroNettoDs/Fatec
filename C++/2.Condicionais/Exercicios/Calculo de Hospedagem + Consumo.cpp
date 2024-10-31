#include <stdio.h>
#include <cctype>
using namespace std;

int main (){
    // declarar
    char hospede[50], apto, consumo;
    int diaria, dias;
    float valor, vconsumo;
    
    // entrada
    printf ("Calculadora de valor hotel 2000\nInsira o Nome do Hospede: ");
    scanf ("%s", hospede);
    
    printf ("Tabela de quartos\nA = Presidencial\nB = Luxo\nC = Conforto\nD = Economica\nInforme qual apartamento ele se hospedou: ");
    scanf (" %c", &apto);
    apto = toupper(apto); // Converter para maiúscula
    
    printf ("Informe quantos dias permaneceu: ");
    scanf ("%d", &dias);
    
    // processamento
    if (apto == 'A'){
        diaria = 150;
    } else if (apto == 'B'){
        diaria = 120;
    } else if (apto == 'C'){
        diaria = 100;
    } else if (apto == 'D'){
        diaria = 80;
    } else {
        printf("Apartamento invalido.\n");
        return 1;
    }
    
    valor = diaria * dias;
    printf ("O cliente %s precisa pagar: R$ %.2f\n", hospede, valor);
    printf ("Ele consumiu algo?\n S (Sim) ou N (Nao): ");
    scanf(" %c", &consumo);
    consumo = toupper(consumo); // Converter para maiúscula
    
    if (consumo == 'S'){
        printf ("Informe o valor de consumo: R$ ");
        scanf ("%f", &vconsumo);
        valor += vconsumo;
        printf ("O cliente %s precisa pagar: R$ %.2f\n", hospede, valor);
    } else if (consumo == 'N'){
        printf ("O cliente %s precisa pagar: R$ %.2f\n", hospede, valor);
    } else {
        printf("Dado invalido.\n");
    }

    return 0;
}

