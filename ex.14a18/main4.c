#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Divisores de %d:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}