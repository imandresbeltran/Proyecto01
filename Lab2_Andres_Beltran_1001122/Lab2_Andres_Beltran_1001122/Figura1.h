#pragma once
#include "Figuras.h"
#include <math.h>
class Figura1 : Figuras
{
public: 
	double AreaFigura1() {
		double area1 = (base * altura) / 2;
		return area1;
	}
	double PerimetroFigura1() {
		double perimetro1 = lado * 3;
		return perimetro1;
	}
};

