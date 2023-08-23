#pragma once
#include <iostream>
using namespace std;

class Moneda
{
	int valor;
	float imagen;

	int getvalor() { return valor; }
	void setvalor(int _valor) { valor = _valor; }
	int getimagen() { return imagen; }
	void setimagen(int _imagen) { imagen = _imagen; }

	Moneda(int valor, int imagen);
	void generadorDeMoneda();
	
};

