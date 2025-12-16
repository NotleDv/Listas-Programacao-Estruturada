#include <stdio.h>

void minMax (int a, int b, int c, int *min, int *max){

    *min = a;
    *max = a;

    if (*min > b){ *min = b; }

    if (*min > c){ *min = c; }

    if (*max < b){ *max = b; }

    if (*max < c){ *max = c; }


}

int main(){
    int a,b,c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    
    int min, max;

    minMax(a,b,c,&min,&max);
    
    printf("Maior: %d\n", max);
    printf("Menor: %d\n", min);
    
}