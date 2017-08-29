// array_bidimensional.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int tabela[2][2];

	tabela[0][0] = 50;
	tabela[0][1] = 30;
	tabela[1][0] = 20;
	tabela[1][1] = 100;

	//segundo jeito

	int tabela2[2][2] = { {50, 30}, {20, 100} };
	cout << "----------------Valores da tabela----------------" << endl;
	cout << tabela2[0][1] << endl;
	cout << tabela2[1][1] << endl;

	system("pause");
    return 0;
}

