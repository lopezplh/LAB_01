#pragma once
#include <iostream>
using namespace std;

class Soles
{
	int posicionx;
	int posiciony;
	int cantidad;

	int getcantidad() { return cantidad;}
	void setcantidad(int _cantidad) { cantidad = _cantidad; }

	Soles(int);
	void recolectarSoles();
	void gastarSoles();
	void actualizarSoles();

};

