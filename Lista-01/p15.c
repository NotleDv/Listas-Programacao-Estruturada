#include <stdio.h>

int main() {
    int n = 0;

    printf("Digite o N: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        printf("\nDigite o par %d\n", i+1);
        float x, y;
        printf("Digite o valor de X: ");
        scanf("%f", &x);
        printf("Digite o valor de Y: ");
        scanf("%f", &y);

        if (y == 0){
            printf("Divisao impossível quando Y for igual a zero\n");
        } else {
            float result = x / y;
            printf("Resultado X/Y: %.2f\n", result);
        }
    }
}
