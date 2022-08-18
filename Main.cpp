#include <locale>
#include <iostream>
#include <string>
#include <stdio.h>
#include "Calculos.h";

void separador()
{
	std::cout << "--------------------------------------------------\n";
}

int main()
{
	int opcao;
	setlocale(LC_ALL, "portuguese");

	std::cout << "Olá, seja bem vindo ao mundo da Estrutura de Dados\n";
	separador();
	std::cout << "Qual programa você quer executar? \n";
	separador();
	std::string opcoes[4] = { "1 - Soma", "2 - Conversor de Graus", "3 - Subtração", "4 - Potencia"};
	separador();
	for (int i = 0; i < 4; i++) {

		std::cout << opcoes[i] << "\n";		
	}
	printf("Digite sua opção: ");

	scanf_s("%d", &opcao);

	switch (opcao) {
		case 1:
			separador();
			std::cout << "Estou iniciando soma \n";
			soma();
			break;
		case 2:
			separador();
			conversao();
			break;
		default:
			std::cout << "Qualquer coisa que tu queira!!";
		case 3:
			separador();
			subtracao();
			break;
	}
}