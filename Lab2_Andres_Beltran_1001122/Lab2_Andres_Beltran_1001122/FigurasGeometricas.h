#pragma once
#include <math.h>

struct Medidas {
	double lado;
	double base;
	double altura;
	double apotema;
};

struct Triangulo : Medidas {

public: double CalcularArea() {
		double resultado = (base * altura) / 2;
		return resultado;
	}

public: double CalcularPerimetro() {
		double perimetro = lado * 3;
		return perimetro;
	}
};

struct Cuadrilatero : Medidas {
	double CalcularAreaCuadrilatero() {
		double resultado = pow(lado, 2);
		return resultado;
	}

	double CalcularPerimetroCuadrilatero() {
		double perimetro = lado * 4;
		return perimetro;
	}
};

struct Pentagono : Medidas {
	double CalcularAreaPentagono() {
		double resultado = (5 / 2) * lado * apotema;
		return resultado;
	}

	double CalcularPerimetroPentagono() {
		double perimetro = lado * 5;
		return perimetro;
	}
};

struct Hexagono : Medidas {
	double CaclularAreaHexagono() {
		double resultado = 3 * (lado) * (apotema);
		return resultado;
	}

	double CalcularPerimetroHexagono() {
		double perimetro = lado * 6;
		return perimetro;
	}
};

struct Heptagono : Medidas {
	double CalcularAreaHeptagono() {
		double resultado = (7 / 2) * (lado) * (apotema);
		return resultado;
	}

	double CalcularPerimetroHeptagono() {
		double perimetro = lado * 7;
		return perimetro;
	}
};

struct Octagono : Medidas {
	double CalcularPerimetroOctagono() {
		double perimetro = lado * 8;
		return perimetro;
	}

	double CalcularAreaOctagono() {
		double resultado = (CalcularPerimetroOctagono() * apotema) / 2;
		return resultado;
	}
};

struct Nonagono : Medidas {
	double CalcularAreaNonagono() {
		double resultado = ((9) * (lado) * (apotema)) / 2;
		return resultado;
	}

	double CalcularPerimetroNonagono() {
		double perimetro = lado * 9;
		return perimetro;
	}
};

struct Decagono : Medidas {
	double CalcularPerimetroDecagono() {
		double perimetro = lado * 10;
		return perimetro;
	}

	double CalcularAreaDecagono() {
		double resultado = (CalcularPerimetroDecagono() * apotema) / 2;
		return resultado;
	}
};

