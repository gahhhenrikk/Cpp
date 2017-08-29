// struct.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ostream>
#include <sstream>

using namespace std;

struct pessoa
{
	string nome;
	string sobrenome;
	int cpf;
	int idade;
};

int main()
{
	pessoa p;
	p.nome = "Gabriel";
	p.sobrenome = "Oliveira";
	p.idade = 18;
	p.cpf = 22336239277;

	cout << "Nome: " << p.nome << endl;
	cout << "Sobrenome: " << p.sobrenome << endl;
	cout << "Idade: " << p.idade << endl;
	cout << "CPF: " << p.cpf << endl;

	system("pause");
    return 0;
}

