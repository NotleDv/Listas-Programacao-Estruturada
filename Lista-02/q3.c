#include <stdio.h>


int somaDiv(int n, int d){
    
    if (d >= 1){
        if (n%d == 0){
            printf("\n> %d", d);
            return ( d + somaDiv( n , d-1 ));
        } else {
            return ( somaDiv( n, d-1 ) );
        }
        
    } else { return 0; }


}

void ehPerfeito(int n ){
    int result = somaDiv( n, n-1 );

    if (n == result){
        printf("\nÉ perfeito!\n");   
    } else {
        printf("\nNão é perfeito!\n");
    }
}

int main(){

    int numero = 0;

    printf("Digite o valor: ");
    scanf("%d", &numero);

    ehPerfeito( numero );


}