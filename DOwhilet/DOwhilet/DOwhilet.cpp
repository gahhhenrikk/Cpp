// DOwhilet.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

// A diferen�a entre o (do while) e o (while) � que se a fun��o n�o estiver de acordo o (do while) ir� executar 1 vez
// j� o while n�o ir� executar nenhuma vez


using namespace std;

int main()
{
	int i = 10;
	cout << "Looping DO WHILE" << endl;

	do {
		i++;
		cout << i << endl;

	} while (i >= 10 && i <= 20);

	int i = 10;
	cout << "Looping WHILE" << endl;

	do {
		i++;
		cout << i << endl;

	} while (i >= 10 && i <= 20);
	
	
	system("pause");
    return 0;
}

