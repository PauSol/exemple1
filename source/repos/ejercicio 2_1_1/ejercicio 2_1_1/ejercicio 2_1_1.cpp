// ejercicio 2_1_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <conio.h>

void Mundo();
void Tierra();
void Saturno();

int main()
{
	srand(time(NULL));

	do
	{
		switch (rand() % 3)
		{
		case 0:
			Mundo();
			break;
		case 1:
			Tierra();
			break;
		case 2:
			Saturno();
			break;
		}
	_getwch();
	} while (true);
	
}

void Mundo()
{
	printf("Hola mundo!\n");
}

void Tierra()
{
	printf("Hola Tierra!\n");
}

void Saturno()
{
	printf("Hola Saturno!\n");
}