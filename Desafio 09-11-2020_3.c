/*Foi feita uma pesquisa com um grupo de alunos de uma universidade, na
qual se perguntou para cada aluno o número de vezes que utilizou o
restaurante da universidade no último mês. Construa um algoritmo que
determine:
a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante;
b) O percentual de alunos que utilizaram entre 10 e 15 vezes;
c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes.
Ex.: Entrada: 2, 3, 11, 12, 21, 22, 23 = Saída = a) 28%; b) 28%; c) 42%*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <math.h>

float i,irREST, grupoA = 0, grupoB = 0, grupoC = 0, total = 0, menor=1, maior=1, medio=1;

int main() {

	do 
	{
		
		printf("Digite quantas vezes o aluno utilizou o restaurante: ");
		scanf_s("%f", &irREST);


		if (irREST > 0 && irREST<10) 
		{
			grupoA++;
		}
		if (irREST>=10 && irREST < 15) 
		{
			grupoB++;
		}
		if (irREST > 15) 
		{
			grupoC++;
		}
		if (irREST > 0) 
		{
			total++;
		}
		
	} while (irREST != -1);
	
	
	menor = (grupoA / total) * 100;
	medio = (grupoB / total) * 100;
	maior = (grupoC / total) * 100;
	
	printf("\nTotal alunos = %.2f", total);
	
	printf("\nPercentual que usou menos de 10x = %.2f%%\n", menor);
	printf("\nPercentual que usou entre 10x e 15x = %.2f%%\n", medio);
	printf("\nPercentual que usou mais de 15x = %.2f%%\n", maior);

}