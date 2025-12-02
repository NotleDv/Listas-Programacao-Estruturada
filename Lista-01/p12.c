#include <stdio.h>

int main() {
    int valor = 0;

    printf("Digite o valor: ");
    scanf("%d", &valor);
    
    printf("\nTabuada do %d:\n", valor);

    for (int i = 1; i <= 20; i++){
        int calc = valor * i;
        printf("%d x %d = %d\n", valor, i, calc);
    }

}
