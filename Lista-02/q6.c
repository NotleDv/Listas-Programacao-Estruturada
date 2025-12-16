#include <stdio.h>

int somaDivisores(int n, int d){

    if (d <= 1){
        return 1;
    }
    if (n%d == 0){
        // printf("Par> %d\n", (d-1));
        return d + somaDivisores(n, d-1);
    } else {
        // printf("Impar> %d\n", (d-1));
        return (somaDivisores(n, d-1));
    }

}

int amigos(int a, int b){

    int result_a = somaDivisores( a, a-1);
    int result_b = somaDivisores( b, b-1 );

    if (result_a == b  && result_b == a){
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int a, b;

    printf("Digite o valor n1: ");
    scanf("%d", &a);

    printf("Digite o valor n2: ");
    scanf("%d", &b);

    int result = amigos(a, b);

    if (result == 1){
        printf("São amigos!\n");
        return 0;
    }
    printf("Não são amigos!\n");
}