// switchCaseDefaut.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

//Programa que informa o m�s do ano conforme o numero digitado na tela 
//caso digitar um numero que nao corresponda um m�s aparacer� uma mensagem

using namespace std;


int main()
{
	
	cout << "Digite um numero: " << endl;
	int num = 0;
	cin >> num;

	switch (num)
	{
		case 1:
			cout << "Janeiro" << endl;
			break;
		case 2:
			cout << "Fevereiro" << endl;
			break;
		case 3:
			cout << "Marco" << endl;
			break;
		case 4:
			cout << "Abril" << endl;
			break;
		case 5:
			cout << "Maio" << endl;
			break;
		case 6:
			cout << "Junho" << endl;
			break;
		case 7:
			cout << "Julho" << endl;
			break;
		case 8:
			cout << "Agosto" << endl;
			break;
		case 9:
			cout << "Setembro" << endl;
			break;
		case 10:
			cout << "Outubro" << endl;
			break;
		case 11:
			cout << "Novembro" << endl;
			break;
		case 12:
			cout << "Dezembro" << endl;
			break;
	
	default:
		cout << "O valor digitado nao corresponde a um mes" << endl;
	}
	

	system("pause");
    return 0;
}

