// letrasAlfabeto.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	char c;
	cout << "Digite uma letra de 'a' ate 'e' " << endl;
	cin >> c;

	switch (c)
	{
		case 'a':
		case 'A':
			cout << "Voce digitou a letra 'a' ou 'A' " << endl;
			break;
		case 'b':
		case 'B':
			cout << "Voce digitou a letra 'b' ou 'B' " << endl;
			break;
		case 'c':
		case 'C':
			cout << "Voce digitou a letra 'c' ou 'C' " << endl;
			break;
		case 'd':
		case 'D':
			break;
		case 'e':
		case 'E':
			cout << "Voce digitou a letra 'e' ou 'E' " << endl;
			break;

	default:
		cout << "O numero digitado eh invalido " << endl;
	}
	
	
	system("pause");
	return 0;
}

