#include <stdio.h>

#define PI 3.14159

int main(){
    float raio = 0;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    double calc = (4.0/3.0)*PI*(raio*raio*raio);
    printf("Volume: %.3f\n ", calc);

}