// while.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int i = 0;

	while (i < 100) {
		cout << i << endl;
		i++;
	}
	
	cout << " ====================================================================================================================== " << endl;
	cout << "Segundo programa" << endl;
	cout << " ====================================================================================================================== " << endl;

	int i2 = 100;

	while (i2 >	0) {
		cout << i2 << endl;
		i2--;
	}
	
	system("pause");
    return 0;
}

