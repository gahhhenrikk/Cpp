// programa9.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int i = 20, i2 = 10;

	cout << "se i for igual a i2, aparecer a seguinte mensagem " << endl;
	if (i == i2)
		cout << "============A variavel i eh igual a i2============"<< endl;

	cout << "se i for diferente a i2, aparecer a seguinte mensagem " << endl;
	if (i != i2)
		cout << "============A variavel i eh diferente a i2============" << endl;

	cout << "se i for maior a i2, aparecer a seguinte mensagem " << endl;
	if (i > i2)
		cout << "============A variavel i eh maior que i2============" << endl;

	cout << "se i for igual a i2, aparecer a seguinte mensagem " << endl;
	if (i < i2)
		cout << "============A variavel i é menor que i2============" << endl;

	cout << "se i for menor ou igual a i2, aparecer a seguinte mensagem " << endl;
	if (i <= i2)
		cout << "============A variavel i eh menor ou igual a i2============" << endl;

	cout << "se i for maior ou igual a i2, aparecer a seguinte mensagem " << endl;
	if (i >= i2)
		cout << "============A variavel i eh maior ou igual a i2============" << endl;
		
	system("pause");
    return 0;
}

