#include <stdio.h>

int somaDigitos(int n){

    if (n < 10){
        printf("in if > %d\n", n);
        return n;
    } else {
        printf("in else > %d\n", n);
        return ( n%10 + somaDigitos( n/10 ) );
    }
    
}

int main(){
    
    printf("Resultado: %d\n", somaDigitos(223));
    printf("Olá\n");

}