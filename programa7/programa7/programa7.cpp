// programa7.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;


int main()
{
	int x, y;
	x = 10;
	y = 20;
	
	cout << "A soma dos valores e: "<< x + y << endl;
	cout << "A divisao dos valores e: " << x / y << endl;
	cout << "A multiplicacao dos valores e: " << x * y << endl;
	cout << "A subtracao dos valores e: " << x - y << endl;
	
	double d = y / (x + 1.0);

	cout <<"A divisao dos valores e: " << d << endl;

	system("pause");
    return 0;
}

