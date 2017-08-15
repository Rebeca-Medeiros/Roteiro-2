#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char num[10];
	char numtel[10];

	int i;
	int n = 0;

	printf("Valida e corrige numero de telefone");

	printf("\n Telefone: ");
	scanf("%s", num);

	for(i = 0; i < strlen(num); i++){
		if(num[i] <= 8 && 0 >= num[i]){
			n++;
		}
	}

	if (num == 7){
		printf("\n Telefone possui 7 digitos. Vou acrescentar o digito tres na frente.");

		strcat(numtel, num);

		printf("\n Telefone corrigido sem formatacao: %s", numtel);
	}

	return 0;
}
