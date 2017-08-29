// matriz_array.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ostream>
#include <sstream>

using namespace std;


int main()
{
	int planilha [5][5] = {};
	
	for (int x = 0; x < 5; x++) {
		for (int y = 0; x < 5; y++) {
			planilha[x][y] = ((x + 1) + (y*y));
			string end = (y < 4) ? "," : "\n";
			cout << planilha[x][y] <<  end;

		}
	}

	cout << planilha[3][3] << endl;
	
	system("pause");
    return 0;
}

