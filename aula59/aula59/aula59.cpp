// aula59.cpp : Define o ponto de entrada para a aplicação de console.
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
	double plan[6][5] = {};
		for (int x = 0; x<5; x++) {
			for (int y = 0; y < 5; y++) {
				plan[x][y] = (double)rand() / RAND_MAX;
			}
		}
		
		// 0 0 0 0 0 = 0.0
		for (int x = 0; x < 5; x++) {
			for (int y = 0; y < 5; y++) {
				string end = (y < 4) ? ", " :
					(y != 5) ? "= " : "\n";
				cout << plan[x][y] << end;
			}

		}

	system("pause");
    return 0;
}

