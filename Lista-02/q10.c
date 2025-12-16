#include <stdio.h>


void fatoresPrimos(int n, int divisor){

    if (n == 1){
        return;
    } 
    else {
        if (n%divisor != 0){
            divisor++;
        } else {
            printf("> %d\n", divisor);
            n = n/divisor;
        }
        fatoresPrimos(n , divisor);
    }

}

int main(){

    int n;

    printf("Digite o número: ");
    scanf("%d", &n);

    fatoresPrimos(n);

}