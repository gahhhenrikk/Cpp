// minicalculadora.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>


using namespace std;

int main()
{
	int num1, num2, soma, sub, div, mult;
	cout << "Mini Calculadora" << endl;
	cout << "Digite o primeiro numero: " << endl;
	cin >> num1;
	cout << "Digite o segundo numero: " << endl;
	cin >> num2;

	soma = num1 + num2;
	sub = num1 - num2;
	div = num1 / num2;
	mult = num1 * num2;

	cout << "O valor da soma e: " << soma << endl;
	cout << "O valor da subtracao e: " << sub << endl;
	cout << "O valor da divisao e: " << div << endl;
	cout << "O valor da multiplicacao e: " << mult << endl;
	system("pause");
    return 0;
}

