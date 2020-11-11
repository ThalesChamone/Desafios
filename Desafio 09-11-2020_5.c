/*Faça um programa que lê quatro valores: I, A, B e C, onde I é um número
inteiro e positivo e A, B, e C são quaisquer valores reais. O programa deve
escrever os valores lidos e:
• se I = 1, escrever os três valores A, B e C em ordem crescente;
• se I = 2, escrever os três valores A, B e C em ordem decrescente;
• se I = 3, escrever os três valores A, B, e C de forma que o maior valor fique
entre os outros dois;
• se I não for um dos três valores acima, dar uma mensagem indicando isto.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float a, b, c;

	printf("Digite 1, 2 ou 3:  ");
	scanf_s("%i", &i);


	printf("Digite 3 valores reais para A, B e C separado por espaco:  ");
	scanf_s("%f %f %f", &a, &b, &c);

	if (i == 2)
	{
		if (a > b)
			if (b > c)
				printf("%.2f, %.2f, %.2f\n", a, b, c);
			else if (a > c)
				printf("%.2f, %.2f, %.2f\n", a, c, b);
			else
				printf("%.2f, %.2f, %.2f\n", c, a, b);
		else
			if (b > c)
				if (a > c)
					printf("%.2f, %.2f, %.2f\n", b, a, c);
				else
					printf("%.2f, %.2f, %.2f\n", b, c, a);
			else
				printf("%.2f, %.2f, %.2f\n", c, b, a);

	}
	if (i == 1)
	{
		if (c > a)
			if (a > b)
				printf("%.2f,%.2f,%.2f\n", b, a, c);
			else if (b < c)
				printf("%.2f,%.2f,%.2f\n", a, b, c);
		if (a > b)
			if (b > c)
				printf("%.2f, %.2f, %.2f\n", c, b, a);
			else if (c < a)
				printf("%.2f,%.2f,%.2f\n", b, c, a);
		if (a < b)
			if (c < a)
				printf("%.2f,%.2f,%.2f\n", c, a, b);
			else if (c < a)
				printf("%.2f, %.2f, %.2f\n", a, c, b);
	}
	if (i == 3)
	{
		if (c > a)
			if (a > b)
				printf("%.2f,%.2f,%.2f\n", a, c, b);
			else if (b < c)
				printf("%.2f,%.2f,%.2f\n", b, c, a);
		if (a > b)
			if (b > c)
				printf("%.2f, %.2f, %.2f\n", b, a, c);
			else if (c < a)
				printf("%.2f,%.2f,%.2f\n", c, a, b);
		if (a < b)
			if (c < a)
				printf("%.2f,%.2f,%.2f\n", a, b, c);
			else if (c < a)
				printf("%.2f, %.2f, %.2f\n", c, b, a);
	}
}