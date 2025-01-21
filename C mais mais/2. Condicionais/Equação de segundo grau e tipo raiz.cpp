#include <stdio.h>
#include <math.h>

int main() {
    // declarando vari�veis
    float a, b, c, delta, x1, x2;
    
    // exibi��o e entrada
    printf("Insira os coeficientes\nA: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);

    // processamento
    if (a != 0) {
        delta = (b * b) - (4 * a * c);
        if (delta < 0) {
            printf("A equacao nao possui raizes reais.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("A equacao possui uma raiz real: %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("A equacao possui duas raizes reais: %.2f e %.2f\n", x1, x2);
        }
    } else {
        printf("Nao e equacao de segundo grau.\n");
    }
    return 0;
}
//Ne--o