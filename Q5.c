#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char sexo;
	float altura;
} Dados;

int main ()
{
	Dados x[10];

	int i;
	int opcao;
	int contM, contF;
	float mediaF = 0.0;
	float mediaM = 0.0;
	float maior, menor;
	char t1, t2;

	do {
		printf("\t\n 1 - Inserir dados"
		       "\t\n 2 - Media de altura M"
		       "\t\n 3 - Media de altura F"
		       "\t\n 4 - Maior e menor"
		       "\t\n 5 - Numero total"
		       "\t\n 6 - Encerrar");

		printf("\n Escolha uma das opcoes: ");
		scanf("%d", &opcao);

		switch(opcao){
			case 1:
				for(i = 0; i < 10; i++){
					printf("\n Digite o sexo F ou M %d/10: ", i + 1);
					scanf("%s", &x[i].sexo);

					printf("\n Digite a altura %d/10: ", i + 1);
					scanf("%s", &x[i].altura);

				}
				break;
			case 2:
				contM = 0;

				for(i = 0; i < 10; i++){
					if(x[i].sexo == 'm'){
						mediaM = mediaM + x[i].altura;
						contM++;
					}

					mediaM = mediaM/contM;

					printf("\n A altura media e: &2.f", mediaM);

				}

				break;
			case 3:
				contF = 0;

				for(i = 0; i < 10; i++){
					if(x[i].sexo == 'f'){
						mediaF = mediaF + x[i].altura;
						contF++;
					}

					mediaF = mediaF/contF;

					printf("\n A altura media e: &2.f", mediaF);

				}

				break;
			case 4:
				menor = x[0].altura;
				t1 = x[0].sexo;
				maior = x[0].altura;
				t2 = x[0].sexo;

				for(i = 1; i < 10; i++){
					if(x[i].altura > maior){
						maior = x[i].altura;
						t1 = x[i].sexo;
					} else {
						if(x[i].altura < menor){
							menor = x[i].altura;
							t2 = x[i].sexo;
						}
					}
				}

				printf("\n Maior: %2.f Sexo: %s \n Menor: %2.f Sexo: %s", maior, t1, menor, t2);


				break;
			case 5:
				printf("\n Numero total de M: %d", contM);
				printf("\n Numero total de F: %d", contF);

				break;
			case 6:
				printf("\n Fim!");

				break;
			default:
				printf("\n Nao existe");

				break;
			}

		} while (opcao != 6);

		return 0;
}














