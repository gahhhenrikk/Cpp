// media_arrays.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	//1) entrada de valores
	
	double val[4];
	for (int i = 0; i <= 4; i++) {
		cout << "Informe um numero " << i+1 << " valor: " << endl;
		cin >> val[i];
	}
	
	//2) calcular a média
	double total = 0;
	for (int i2 = 0; i2 <= 4; i2++) {

		total = total + val[i2];
	}

	cout << fixed;
	cout << "A media eh: " << (total / 5) << endl;




	
	system("pause");
    return 0;
}

