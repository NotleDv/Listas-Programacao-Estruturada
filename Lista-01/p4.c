#include <stdio.h>

int main(){
    int input = 0;
    printf("Digite o total de segundos: ");
    scanf("%d", &input);

    int hora = input/3600;
    int minut = ( input%3600 ) / 60;
    int sec = minut%60;    

    printf("%d:%d:%d\n", hora, minut, sec);


}