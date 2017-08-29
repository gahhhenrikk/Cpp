// DOwhilet.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

// A diferença entre o (do while) e o (while) é que se a função não estiver de acordo o (do while) irá executar 1 vez
// já o while não irá executar nenhuma vez


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

