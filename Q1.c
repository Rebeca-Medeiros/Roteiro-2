#include <stdio.h>
#include <stdlib.h>

int HoraMin (int hora, int min)
{
    if (hora >= 12 && hora <= 24){
        printf("PM/AM \n");

        hora = hora - 12;

        printf("Convertido: %d:%d PM", hora, min);
    } else {
        printf("AM/PM \n");

        hora = hora + 12;

        printf("Convertido: %d:%d", hora, min);
    }
}

int main ()
{
    int hora;
    int min;

    printf("Digite a hora: \n");
    scanf("%d", &hora);

    printf("Digite os minutos: \n");
    scanf("%d", &min);

    HoraMin (hora, min);

    return 0;
}

