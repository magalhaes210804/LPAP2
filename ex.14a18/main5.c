#include <stdio.h>
int main() {
    int numero;
    int somaDivisores = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }
    if (somaDivisores == numero) {
        printf("%d é um numero perfeito.\n", numero);
    } else {
        printf("%d nao é um numero perfeito.\n", numero);
    }
    return 0;
}