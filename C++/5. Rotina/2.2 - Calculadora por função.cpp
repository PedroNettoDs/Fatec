#include <stdio.h>
 
int somatoria(int n1, int n2) {
    int i, s;
    s = 0;
    for (i=n1; i<=n2; i++) {
        s = s + i;
    }
    return s;
}
 
int main()
{
    int n1, n2, s;
    printf("Calculadora, soma entre os numeros\nInsira o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    s = somatoria(n1, n2);
    printf("Soma = %d\n", s);
    return 0;
}
