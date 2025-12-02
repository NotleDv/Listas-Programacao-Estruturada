#include <stdio.h>

int main(){
    float v1, v2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);

    float result = ( (v1 * 3.5) + (v2 * 7.5) )/(3.5 + 7.5);
    
    printf("Resultado: %.2f\n", result);

    return 0;
}