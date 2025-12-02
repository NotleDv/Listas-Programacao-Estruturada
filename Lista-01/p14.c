#include <stdio.h>

int main() {
    int v1, v2;

    printf("Digite o nº 1: ");
    scanf("%d", &v1);
    
    printf("Digite o nº 2: ");
    scanf("%d", &v2);

    int vMaior, vMenor;
    if (v1 > v2){
        vMaior = v1;
        vMenor = v2;
    } else {
        vMaior = v2;
        vMenor = v1;
    }

    int soma = 0;
    int array[10];
    int lenArray = 0;
    for (int i = vMaior; i >= vMenor; i--){
        if (i<0){break;}

        array[lenArray] = i;
        soma += i;
        lenArray++;

    }

    printf("\nSoma: %d\n", soma);
    printf("Lista dos valores: ");
    for (int i = 0; i < lenArray; i++){
        printf("%d", array[i]);
        if (i < lenArray-1){ 
            printf(", ");
        } else {
            printf("\n");
        }
    }

    


}
