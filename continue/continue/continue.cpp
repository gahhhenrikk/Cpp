// continue.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int n = 0;

	while (true) {
		n++;

		if (n >= 10) {
			break;
		}
		else {
			if (n == 4 || n == 6)
				continue;
			cout << n << endl;
		}
	}

	
	system("pause");
    return 0;
}

