#include <stdio.h>

int main (){
    // declarando
    float P1, P2, P3, media, calculo;
    
    // entrada
    printf ("Calculadora de m�dia\nInsira a nota da Prova 1: ");
    scanf ("%f", &P1);
    
    printf ("Informe a nota da Prova 2: ");
    scanf ("%f", &P2);
    
    printf ("Informe a nota da Prova 3: ");
    scanf ("%f", &P3);
    
    // processamento
    calculo = P1 + P2 + P3;
    media = calculo / 3;
    
    if (media > 8){
        printf ("Aluno nota A");
    } else if (media > 5 && media < 8){
        printf ("Aluno nota B");
    } else {
        printf ("Aluno nota C");
    }
    
    return 0;
}
//Ne--o