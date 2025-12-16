#include <stdio.h>


int somaImpares(int *n1, int *n2){
    int *maior, *menor;

    if (*n1 > *n2){
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
    }

    int soma = 0;
    
    for (int i = *menor+1; i <= *maior; i++){
        if (i%2 != 0){
            // printf("> %d\n", i);
            soma+= i;
        }
    }

    printf("Resultado: %d\n", soma);
}

int main(){

    int n1, n2;

    printf("Digite o valor de X: ");
    scanf("%d", &n1);

    printf("Digite o valor de Y: ");
    scanf("%d", &n2);

    somaImpares(&n1, &n2);

}