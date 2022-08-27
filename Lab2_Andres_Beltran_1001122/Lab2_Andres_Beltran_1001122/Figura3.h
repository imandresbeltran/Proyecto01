#pragma once
#include "Figuras.h"
#include <math.h>
#define M_PI
class Figura3 : Figuras
{
public:
	double AreaFigura3() {
		double area3 = M_PI pow(radio, 2);
		return area3;
	}

	double PerimetroFigura3() {
		double perimetro3 = 2 * M_PI pow(radio, 2);
		return perimetro3;
	}
};

