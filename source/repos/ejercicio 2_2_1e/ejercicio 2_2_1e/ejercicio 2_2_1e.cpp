// ejercicio 2_2_1e.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string.h>

int CuentaLetras(char *cadena)
{
	char cadeneta[100] = "Pim pam pum";
	int cuentaLetras = 0;

	while (cadena[cuentaLetras] != '\0')
	{
		cuentaLetras++;
	}
	
}

int Suma1(int n1, int n2)
{

	return n1 + n2;
}

void Suma2(int n1, int n2, int &n3)
{
	n3 = n1 + n2;
}

void Suma3(int n1, int n2, int *n3)
{
	*n3 = n1 + n2;
}
int main()
{
	int a = 10;
	int b = 20;

	int c = Suma1(a, b);

	c = 100;

	Suma2(a, b, c);

	c = 100;

	Suma3(a, b, &c);
	////printf
	//_getwch();
}

