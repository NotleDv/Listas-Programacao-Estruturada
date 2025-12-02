#include <stdio.h>

int main(){
    int v1= 60;
    int v2 = 90;
    float distancia = 0;

    printf("Digite a distância: ");
    scanf("%f", &distancia);

    float result = ( (distancia)/(v1+v2) ) * 60;

    printf("Tempo será: %.2f min\n", result);

}