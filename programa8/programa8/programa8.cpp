// programa8.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	//Resto da divisão "%"

	cout << "RESTO DA DIVISAO"<< endl;
	int num1, num2;
	num1 = 20;
	num2 = 10;
	int div = num1 / num2;
	int resto = num1 % num2;
	cout << "O resultado da divisao e: "<< div << endl;
	cout << "O resultado do resto e: " << resto << endl;
	system("pause");
    return 0;
}

