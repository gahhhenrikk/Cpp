// depuracao.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

//O programa consiste nas funções for, while, do-while, digita de 1 a 3 e executara as seguintes funções

using namespace std;

int main()
{
	cout << "Digite um numero entre 1 e 3 " << endl;
	int num = 0;
	cin >> num;
		
	if (num == 1) {
		for (int i = 0; i < 5; i++) {
			cout << "O valor da variavel da funcao FOR eh: " << i << endl;
		}
	}
	else {
		if (num == 2) {
			int i2 = 0;
			while (i2 < 5) {
				i2++;
				cout << "O valor da variavel da funcao WHILE eh: " << i2 << endl;
			}
		}
		else {
			if (num == 3) {
				int i3 = 0;
				do {
					i3++;
					cout << "O valor da variavel DO-WHILE eh: " << i3 << endl;
				} while (i3 < 5);
			}
		}
	}
		
	
	

	
	system("pause");
	return 0;
}

