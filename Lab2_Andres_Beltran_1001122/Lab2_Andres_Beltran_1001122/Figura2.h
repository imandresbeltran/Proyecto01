#pragma once
#include "Figuras.h"
class Figura2 : Figuras
{
public:
	double AreaFigura2() {
		double area2 = base * altura;
		return area2;
	}

	double PerimetroFigura2() {
		double perimetro2 = (2 * base) + (2 * altura);
		return perimetro2;
	}
};

