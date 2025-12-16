#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k){
    int soma = 0;

    if (inicio > fim){
        printf("Intervalo inválido!\n");
        return 0;
    }

    for (int i = inicio; i <= fim; i++){
        if (i%k == 0){
            soma+=i;
        }    
    }
    return soma;
}

int main(){

    int inicio, fim, k;

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    printf("\nResultado: %d\n", somaMultiplos(inicio, fim, k));

}