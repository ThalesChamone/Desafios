/*Escreva um algoritmo que calcule os quadrados e cubos dos números de 0 a
10 e imprima os valores resultantes no formato de tabela, como segue:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int cubo[11] = { 0,1,2,3,4,5,6,7,8,9,10 }, i;
	int quadrado[11] = { 0,1,2,3,4,5,6,7,8,9,10 };

	for (i = 0; i <= 10; i++)
	{
		cubo[i] = pow(cubo[i],3);
	}
	for (i = 0; i <= 10; i++)
	{
		quadrado[i] = pow(quadrado[i], 2);
	}

	for (i = 0; i <= 10; i++)
	{
		printf("Numeros [%i]", i);
		printf("\t\tQuadrado[%i]", quadrado[i]);
		printf("\t\tCubo[%i]\n", cubo[i]);
	}
}