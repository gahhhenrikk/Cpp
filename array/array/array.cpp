// array.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;


int main()
{
	//PRIMEIRA MANEIRA PARA DECLARAR ARRAY
	cout << "--------------PRIMEIRA PARTE--------------" << endl;

	int nums[4];
	nums[0] = 15;
	nums[1] = 30;
	nums[2] = 50;
	nums[3] = 20;

	cout << nums[2] + nums[3] << endl;
	cout << nums[0] << endl;

	//PRIMEIRA MANEIRA PARA DECLARAR ARRAY
	cout << "--------------SEGUNDA PARTE--------------" << endl;
	int nums2[] = { 32, 123, 41, 1, 9 };

	cout << nums2[0] + nums2 [3] << endl;
	cout << nums2[2] << endl;
	
	
	
	system("pause");
    return 0;
}

