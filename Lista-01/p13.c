#include <stdio.h>

int main() {
    int array[9];
    int valTemp = 0;
    for (int i = 0; i < 10; i++){
        printf("Digite o número nº %d: ", i+1);
        scanf("%d", &valTemp);
        array[i] = valTemp;
    }
    int menor = array[0];
    int tamanho = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < tamanho; i++){
        if (menor > array[i]){
            menor = array[i];
        }
    }

    printf("\nMenor valor: %d\n", menor);

    for (int i = 0; i < tamanho; i++){
        if (array[i] == menor){
            printf("Posição: %d\n", i+1);
            break;
        }
    }
}
