#include <stdio.h>

int main (){
    // declarar variavel
    float altura, peso, massa;
    
    // entrada
    printf ("Verificador de obesidade\nInsira a altura (em metros): ");
    scanf ("%f", &altura);
    printf ("Agora informe seu peso (em kg): ");
    scanf ("%f", &peso);
    
    // processamento
    massa = peso / (altura * altura);
    
    // sa�da
    if (massa < 26){
        printf ("Voce esta classificado como: Normal\n");
    } else if (massa >= 26 && massa < 30){
        printf ("Voce esta classificado como: Obeso\n");
    } else if (massa >= 30){
        printf ("Voce precisa emagrecer!\n");
    }
    
    return 0;
}
//Ne--o