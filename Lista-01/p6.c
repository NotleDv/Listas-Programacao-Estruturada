#include <stdio.h>


int main(){
    float x, y;

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    char *result = " ";

    printf("Localização: ");

    if (x == 0 && y == (int)y && y != 0){
        printf("Está no eixo Y\n");
    }
    if (y == 0 && x == (int)x && x != 0){
        printf("Está no eixo X\n");
    }
    if (y > 0 && x > 0){
        printf("Está no quadrante 1\n");
    }
    if (y > 0 && x < 0){
        printf("Está no quadrante 2\n");
    }
    if (y < 0 && x < 0){
        printf("Está no quadrante 3\n");
    }
    if (y < 0 && x > 0){
        printf("Está no quadrante 4\n");
    }
    if (y == 0 && x == 0) {
        printf("Está na origem\n");
    }

}