// programa5.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Digite um numero " << endl;
	int num1 = 0;
	cin >> num1;
	
	cout << "Digite outro numero " << endl;
	int num2 = 0;
	cin >> num2;
	

	cout << "Os numeros digitados foram: " << num1 << " e " << num2 << endl;

	cout << "A soma desses numeros é:"<< num1 + num2 << endl;



	system("pause");
	return 0;
}
