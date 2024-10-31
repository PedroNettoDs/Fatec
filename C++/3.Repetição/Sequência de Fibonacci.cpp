#include <stdio.h>

int main() {
    int N;
    
    printf("Digite um valor para N (deve ser maior ou igual a 2): ");
    scanf("%d", &N);
    
    while (N < 2) {
        printf("Valor invalido. Por favor, digite um numero maior ou igual a 2: ");
        scanf("%d", &N);
    }
    
    int fib1 = 1, fib2 = 1;
    
    printf("%d %d ", fib1, fib2);
    

    for (int i = 3; i <= N; i++) {
        int proximoFib = fib1 + fib2; 
        printf("%d ", proximoFib); 
        
        fib1 = fib2;
        fib2 = proximoFib;
    }
    
    printf("\n");
    return 0;
}
//Ne--o