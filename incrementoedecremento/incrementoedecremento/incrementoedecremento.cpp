// incrementoedecremento.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int i = 0, i2 = 0;
	cout << "Pre = " << ++i << endl; //pr�-incrementar
	cout << "Pos = " << i2++ << endl; //p�s-incrementar
	cout << "Pos = " << i2 << endl;
	
	cout << endl;

	i = 0;
	i2 = 0;

	cout << "Pre = " << --i << endl; //pr�-decrementar
	cout << "Pos = " << i2-- << endl; //p�s-decrementar
	cout << "Pos = " << i2 << endl;


	system("pause");
    return 0;
}

