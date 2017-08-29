// variaveis3programa.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int sapato = 10;
	char nome = 'r';
	double altura = 1.85;
	cout << "Minha sapato e :" << sapato << endl;
	cout << "Meu nome e :" <<  nome << endl;
	cout << "Minha altura e :" << altura << endl;

	cout << "Memoria da variavel sapato :" << sizeof(sapato) << endl;
	cout << "Memoria da variavel nome :" << sizeof(nome) << endl;
	cout << "Memoria da variavel altura :" << sizeof(altura) << endl;
	system("pause");
	return 0;
}

