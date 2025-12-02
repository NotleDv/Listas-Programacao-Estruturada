#include <stdio.h>


int main(){
    float km, litros;

    printf("Digite o total de KM: ");
    scanf("%f", &km);

    printf("Digite o total de combustível: ");
    scanf("%f", &litros);

    float result = (km/litros);
    printf("%.3f km/l\n", result);

}