// funciones_flotantes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "Areas.h"
	


int main()
{
	float cohete = AreaTriangulo(0.8f, 1.f) + 
		AreaTriangulo(1.f, 1.f) * 2 + 
		AreaTriangulo(2.5f, 2.f) + 
		AreaCuadrado(1.f) +
		AreaRectangulo(4.f, 1.f);

	printf("Cohete: %f\n", cohete);

	float casa = AreaTriangulo(5.f, 3.f) + 
		AreaTriangulo(1.f, 1.f) + 
		AreaRectangulo(1.f, 2.f) * 2 + 
		AreaRectangulo(5.f, 3.f) - 
		AreaCirculo(0.3f) * 2;

	printf("Casa: %f\n");

	float coche = AreaCuadrado(1.f) + 
		AreaRectangulo(1.f, 2.f) + 
		AreaCirculo(0.3f);

	printf("Coche: %f");

	_getwch();
    
}

