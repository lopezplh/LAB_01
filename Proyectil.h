#pragma once
#include <iostream>
using namespace std;

class Proyectil
{
	int velocidad;
	float forma;
	int posicionx;
	int posiciony;
	int objetivo;
	int activo; //si esta en movimineto o estatico

	int getvelocidad() { return velocidad; }
	void setvelocidal(int _velocidad) { velocidad = _velocidad; }
	int getforma() { return forma; }
	void setforma(int _forma) { forma = _forma; }
	int getobjetivo() { return objetivo; }
	void setobjetivo(int _objetivo) { objetivo = _objetivo; }
	int getactivo() { return activo; }
	void setactivo(int _activo) { activo = _activo; }


	Proyectil(int, int, int, int);
	void movimiento();
	void colicion();
	void actualizar();

};

