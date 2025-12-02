#include <stdio.h>


int main(){
    float salario = 0;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario < 1500){
        salario = salario + salario * 0.2;
    }
    if (salario >= 1500 && salario <= 5000){
        salario = salario + salario * 0.15;
    }
    if (salario > 5000) {
        salario = salario + salario * 0.1;
    }
    printf("Novo salário: R$ %.2f\n", salario);

}