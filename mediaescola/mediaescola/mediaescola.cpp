// mediaescola.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	double nota1, nota2, nota3, soma;
		cout << "Digite sua primeira nota" << endl;
		cin >> nota1;
		
		cout << "Digite sua segunda nota" << endl;
		cin >> nota2;

		cout << "Digite sua terceira nota" << endl;
		cin >> nota3;

		soma = nota1 + nota2 + nota3;
		soma = (soma / 3);
		
		cout << "========================================================="<< endl;
		cout << "Sua media foi: "<< soma << endl;
		cout << "=========================================================" << endl;
		
		
		if (soma >=7) {
			cout << "Parabens! Voce foi aprovado!" << endl;
		}
		
		else {
			cout << "Infelizmente voce foi reprovado!" << endl;
		}
	
	system("pause");
    return 0;
}

