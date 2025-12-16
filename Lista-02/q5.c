#include <stdio.h>


int passos(int n){

    if (n == 1){
        return 0;
    }
    if (n%2 == 0){
        printf("> +1 Par: %d \n", (n));
        return ( 1 + passos( n/2 ));
    } else {
        printf("> +1 Impar: %d \n", (n));
        return ( 1 + passos( n-1 ));
    }

}


int main(){

    int n;

    printf("Digite o valor: ");
    scanf("%d", &n);

    printf("Total de passos: %d\n", passos(n));

}