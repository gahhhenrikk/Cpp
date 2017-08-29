// incrementoedecremento.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int i = 0, i2 = 0;
	cout << "Pre = " << ++i << endl; //pré-incrementar
	cout << "Pos = " << i2++ << endl; //pós-incrementar
	cout << "Pos = " << i2 << endl;
	
	cout << endl;

	i = 0;
	i2 = 0;

	cout << "Pre = " << --i << endl; //pré-decrementar
	cout << "Pos = " << i2-- << endl; //pós-decrementar
	cout << "Pos = " << i2 << endl;


	system("pause");
    return 0;
}

