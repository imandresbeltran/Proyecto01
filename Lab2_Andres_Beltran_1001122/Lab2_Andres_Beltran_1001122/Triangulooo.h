#pragma once
#include "Figuras.h"
ref class Triangulo : Figuras
{
public:
	double AreaTriangulo() {
		double areatriangulo = ((base) * (altura)) / 2;
		return areatriangulo;
	}

	double PerimetroTriangulo() {
		double perimetrotriangulo = lado * 3;
		return perimetrotriangulo;
	}
};

