#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("Número positivo\n");
    } else if (numero < 0) {
        printf("Número negativo\n");
    } else {
        printf("Número zero\n");
    }

    return 0;
}
