/*Um hotel com 30 quartos cobra R$ 50,00 por di�ria e mais uma taxa de
servi�os. A taxa de servi�os � de:
� R$ 4,00 por di�ria, se o n�mero de di�rias for < 15;
� R$ 3,60 por di�ria, se o n�mero de di�rias for = 15;
� R$ 3,00 por di�ria, se o n�mero de di�rias for > 15.
Fa�a um algoritmo que imprima que solicite o nome e o total de di�rias que um
cliente necessita. Calcule e imprima o valor total que o cliente dever� pagar.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <math.h>

float taxa, diaria, taxatotal1;
char nome[50];

int main() {

	printf("Nome cliente: ");
	scanf_s("%[^\n]s", &nome, 50);
	getchar();

	printf("Diarias cliente: ");
	scanf_s("%f", &diaria);

	if (diaria < 15) {

		taxatotal1 = ((50*diaria) + (4*diaria));
	}
	else if (diaria == 15) {

		taxatotal1 = ((50 * diaria) + (3,60*diaria));
	}
	else if (diaria > 15) {
		taxatotal1 = ((50*diaria) + (3*diaria));
	}
	printf("\nO cliente %s pagara no total o valor de: %.2f reais\n", nome, taxatotal1);
	
}