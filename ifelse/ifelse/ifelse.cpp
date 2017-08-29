// ifelse.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	
	int num1 = 0;
	cout << "Digite um numero: " << endl;
	cin >> num1;
	if (num1 >100) {
		cout << "O valor eh maior que 100 " << endl;
	}else {
		cout << "O valor eh menor que 100 " << endl;
	}
	
	system("pause");
    return 0;
}

