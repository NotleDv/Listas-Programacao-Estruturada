#include <stdio.h>


void reduz(int *a, int *b){
    int count = 0;
    while (*a != *b){
        if (*a > *b){
            *a = *a - *b;
            count++;
        }
        else if (*b > *a){ 
            *b = *b - *a;
            count++;
        }
    }

    printf("Número de operações: %d\n", count);

}

int main(){

    int a,b;
    printf("Digite o 1º valor: ");
    scanf("%d", &a);
    printf("Digite o 2º valor: ");
    scanf("%d", &b);

    reduz(&a, &b);

}