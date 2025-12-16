#include <stdio.h>

int inverte(int n, int acumulador){
    if (n == 0){
        return acumulador;
    }
    else {
        acumulador = (acumulador * 10) + (n%10);
        return inverte( n/10, acumulador );
    }

}

int ehPalindromo(int n){

    int resultado = inverte(n, 0);
    // printf("> %d\n", resultado);
    if (n == resultado){
        return 1;
    } else {
        return 0;
    }

}


int main(){

    int n;

    printf("Digite o número: ");
    scanf("%d", &n);

    int result = ehPalindromo( n );

    if (result == 1){
        printf("%d É palindromo!\n", n);
    } else {
        printf("%d Não é palindromo!\n", n);
    }



}