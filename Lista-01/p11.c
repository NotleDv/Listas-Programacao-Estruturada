#include <stdio.h>

int main() {
    int v1 = 0;
    int v2 = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &v1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &v2);

    int result = 0;
    int inicio, fim;
    if (v1 > v2){
        inicio = v2;
        fim = v1;
    } else {
        inicio = v1;
        fim = v2;
    }
    

    for (int i = inicio+1;  i < fim; i++){
        if (i%2 != 0){
            result += i;
        }
    }

    printf("Resultado soma: %d\n", result);
}
