/*Faça um programa que receba o valor da venda, escolha a condição de
pagamento no menu e mostre o total da venda final conforme condições a
seguir:
Venda a Vista - desconto de 10%
Venda a Prazo 30 dias - desconto de 5%
Venda a Prazo 60 dias - mesmo preço
Venda a Prazo 90 dias - acréscimo de 5%
Venda com cartão de débito - desconto de 8%
Venda com cartão de crédito - desconto de 7%*/

#include<stdio.h>

float valorvenda, valornovo, desconto;
int metododepagamento;

int main() {
	printf("Insira o valor da venda: ");
	scanf_s("%f", &valorvenda);

	printf("\nEscolha o metodo de pagamento\n (1 - A VISTA)\n (2 - PRAZO 30 DIAS)\n (3 - PRAZO 60 DIAS)\n (4 - PRAZO 90 DIAS)\n (5 - DEBITO)\n (6 - CREDITO)");
	scanf_s("%i", &metododepagamento);

	if (metododepagamento == 1) {
		desconto = valorvenda * 10 / 100;
		valornovo = valorvenda - desconto;
	}
	if (metododepagamento == 2) {
		desconto = valorvenda * 5 / 100;
		valornovo = valorvenda - desconto;
	}
	if (metododepagamento == 3) {
		valornovo = valorvenda;
	}
	if (metododepagamento == 4) {
		desconto = valorvenda * 5 / 100;
		valornovo = valorvenda + desconto;
	}
	if (metododepagamento == 5) {
		desconto = valorvenda * 8 / 100;
		valornovo = valorvenda - desconto;
	}
	if (metododepagamento == 6) {
		desconto = valorvenda * 7 / 100;
		valornovo = valorvenda - desconto;
	}
	printf("\no total a ser pago e de R$ %.2f", valornovo);
}