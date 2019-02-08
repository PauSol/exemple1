#include "pch.h"

float AreaTriangulo(float base, float altura)
{
	return (base * altura) / 2.f;
}

float AreaCuadrado(float lado)
{
	return lado * lado;
}

float AreaRectangulo(float base, float altura)
{
	return base * altura;
}

float AreaCirculo(float radio)
{
	return pi * radio * radio;
}