#include <stdio.h>
#include <stdlib.h>

int SequenciaN (int x)
{
    int i;
    int j;

    for (i = 1; i <= x; i++){

        for (j = 1; j <= i; j++){

            printf("\t %d", j);

        }

        printf("\n");
    }
}

int main()
{
    int x;

    printf("Digite um valor para x: \n");
    scanf("%d", &x);

    SequenciaN(x);

    return 0;
}

