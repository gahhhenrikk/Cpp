// operadoreslogicos.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int i = 0;
	cout << "Digite um numero de 40 a 80" << endl;
	cin >> i;
	
	if (i >= 40 && i <= 80) {
		cout << "==========================================" << endl;
		cout << "O numero esta entre o intervalo solicitado" << endl;
		cout << "==========================================" << endl;
	
			if (i == 40 || i == 80) 
				cout << "============================================================" << endl;
				cout << "O numero digitado eh igual a algum extremo" << endl;
			    cout << "============================================================" << endl;
	}
	else {
		cout << "============================================================" << endl;
		cout << "O numero digitado nao esta de acordo com o numero solicitado" << endl;
		cout << "============================================================" << endl;
	}
	
	system("pause");
    return 0;
}

