#include <stdio.h>


int main (){
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    int p1 = 0;
    int p2= 0;
    int p3 = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);
    
    if (n1 < n2 && n1 < n3){
        p1 = n1;
        if (n2 < n3){
            p2 = n2;
            p3 = n3;
        } else {
            p2 = n3;
            p3 = n2;
        }
    }

    if (n2 < n1 && n2 < n3){
        p1 = n2;
        if (n1 < n3){
            p2 = n1;
            p3 = n3;
        } else {
            p2 = n3;
            p3 = n1;
        }
    }
    
    if (n3 < n1 && n3 < n2){
        p1 = n3;
        if (n1 < n2){
            p2 = n1;
            p3 = n2;
        } else {
            p2 = n2;
            p3 = n1;
        }
    }

    printf("\nOrdenado: %d, %d, %d\n", p1, p2,p3);
    printf("Original: %d %d %d\n", n1, n2,n3);

}