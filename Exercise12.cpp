//Exercise of https://www.cprogressivo.net/2013/02/questoes-resolvidas-sobre-if-else.html
/*
0. Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor
1. Faça um programa que receba três inteiros e diga qual deles é o maior e qual o menor. Consegue criar mais de uma solução?
2. Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.
3. Escreva um programa que pergunte o raio de uma circunferência, e sem seguida mostre o diâmetro, comprimento e área da circunferência.
4. Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
5. Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
Desafio 1. Crie um programa em C que peça um número ao usuário e armazene ele na variável x. Depois peça outro número e armazene na variável y.
Mostre esses números. Em seguida, faça com que x passe a ter o valor de y, e que y passe a ter o valor de x.
Dica: você vai precisar usar outra variável.
*/

#include <iostream>

int main (){
	
	int num1 {};
	int num2 {};
	
	std::cout << "Enter a number: ";
	std::cin >> num1;
	
	std::cout << "Enter a other number: ";
	std::cin >> num2;
	
	if (num1 > num2){
		std::cout << "First Number " << num1 << std::endl;
		std::cout << "Second Number : " << num2 << std::endl;
		std::cout << "The first number is greater than the second" << std::endl;
	}

	if (num2 > num1){
		std::cout << "First Number " << num1 << std::endl;
		std::cout << "Second Number : " << num2 << std::endl;
		std::cout << "The second number is greater than the first" << std::endl;
	
	if (num1 == num2){
		std::cout << "First Number " << num1 << std::endl;
		std::cout << "Second Number : " << num2 << std::endl;
		std::cout << "Both Numbers" << std::endl;
	}
	
	return 0;
	}
}