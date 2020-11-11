/*Foi realizada uma pesquisa de algumas características físicas da população
de uma certa região, a qual coletaram os seguintes dados referentes a cada
habitante para serem analisados:
- sexo (masculino ou feminino)
SENAI BELO HORIZONTE CENTRO
- cor dos olhos (azuis, verdes ou castanhos)
- cor dos cabelos (louros, castanhos ou pretos)
- idade
Faça um algoritmo que determine e escreva:
a) a maior idade dos habitantes;
b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e
35 anos, inclusive;
c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros;
O final do conjunto de habitantes é reconhecido pelo valor -1 informado como
idade.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char sexo[3], corOlhos[20], corCabelo[20], olhoVerde[20] = "verdes", cabeloLouro[20] = "louros", F[2] = "F";
	int idade, comparador1 = 0, comparador2 = 0, cont1 = 0, maiorIdade = 0, contFeminino = 0, comparador3 = 0;

	do {

		printf("Digite sua idade:  ");
		scanf_s("%i", &idade);
		if (idade == -1)
			break;

		fflush(stdin);
		printf("Digite seu sexo (M) ou (F) ");
		scanf_s("%s", &sexo,3);
		

		printf("Digite a cor dos olhos (azuis, verdes ou castanhos):  ");
		scanf_s("%s", &corOlhos, 20);

		comparador1 = strcmp(corOlhos, olhoVerde);

		printf("Digite a cor do cabelo (louros, castanhos ou pretos):  ");
		scanf_s("%s", &corCabelo, 20);

		comparador2 = strcmp(corCabelo, cabeloLouro);
		if (comparador2 == 0 && comparador1 == 0)
			cont1++;

		if (idade > maiorIdade)
			maiorIdade = idade;

		comparador3 = strcmp(sexo, F);
		if (comparador3 == 0 && idade > 18 && idade < 35)
			contFeminino++;

	} while (idade != -2);

	printf("A maior idade dos habitantes = %i\n", maiorIdade);
	printf("Quantidade de mulheres entre 18 e 35 anos = %i\n", contFeminino);
	printf("Quantidade de individuos que tenham olhos verdes e cabelos louros = %i\n", cont1);

	system("pause");


}