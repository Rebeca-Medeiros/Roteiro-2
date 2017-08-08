#include <stdio.h>
#include <stdlib.h>

int Eh_Divisivel (int x, int y)
{
        if ( x % y == 0){

            return 1;

        } else {

            return 0;
        }

        printf("\n");
}

int Eh_Primo (int x)
{
    int cont = 0;
    int y;

    for ( y = x; y > 0; y--) {

        if ( Eh_Divisivel(x, y) == 1){
            cont++;

        }
    }

    if (cont == 2){
        printf("\n eh primo");
    } else {
        printf("\n NAO Primo");
    }

}
int main ()
{
    int x;


    printf("Digite um numero: \n");
    scanf("%d", &x);


    /*Eh_Divisivel (x, a);*/

    Eh_Primo (x);

    return 0;
}
