#include <stdio.h>

int main ()
{
     // Declarando variáveis
     int number1, number2, mult, soma;
     
     // Entrada
     printf("Insira o primeiro numero: ");
     scanf("%d", &number1);
     printf("Insira o segundo numero: ");
     scanf("%d", &number2);

     // Processamento
     mult = number1 * 5;
     soma = number2 + 10;
     
     // Saída
     printf("O resultado da multiplicacao é: %d\n", mult);
     printf("O resultado da soma é: %d\n", soma);
     
     return 0;
}

