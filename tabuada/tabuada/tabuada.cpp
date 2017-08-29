// tabuada.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

//TABUADA

using namespace std;


int main()
{
	// 1) Perguntar qual a tabuada do usuario
	// e armazenar o valor numa variavel

	cout << "Digite a tabuada que deseja" << endl;

	int n = 0;

	cin >> n;

	// 2) laço de repetição com FOR

	for (int i = 1; i <= 10; i++) {

		// 3) colocar tabuada na tela
		cout << i << " x "<< n << " = "<< i*n << endl;
	}


	system("pause");
    return 0;
}

