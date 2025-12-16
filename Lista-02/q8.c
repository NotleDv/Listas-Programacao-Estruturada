#include <stdio.h>

void mediaPositivos(){
    int ePar = 0;
    int soma = 0;

    for (int i = 1; i<=5; i++){
        int n;
        printf("Digite o %dº valor: ", (i));
        scanf("%d", &n);

        if(n > 0){
            ePar++;
            soma+= n;
        } 
    }

    printf("Resultado: %d\n", (soma/ePar));
}

int main(){

    mediaPositivos();

}