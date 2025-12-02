#include <stdio.h>

int main(){
    int horaInicio, minutoInicio;
    int horaFim, minutoFim;

    printf("Digite a hora inicial: ");
    scanf("%d", &horaInicio);
    printf("Digite o minuto inicial: ");
    scanf("%d", &minutoInicio);

    printf("\nDigite a hora final: ");
    scanf("%d", &horaFim);
    printf("Digite o minuto final: ");
    scanf("%d", &minutoFim);
    
    int totalInicio = (horaInicio * 60) + minutoInicio;

    if (horaFim < horaInicio){
        horaFim += 24;
    }

    int totalFim = (horaFim * 60) + minutoFim;

    int calc = totalFim - totalInicio;

    int horasTotal = calc / 60;
    int minutoTotal = calc % 60;

    printf("\nTempo decorrido foi de: ");
    if (horasTotal != 0){
        printf("%d Horas ", horasTotal);
    }
    printf("%d Minutos\n", minutoTotal);

    return 0;
}
