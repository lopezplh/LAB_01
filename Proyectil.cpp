#include "Proyectil.h"
#include <iostream>
using namespace std;

Proyectil::Proyectil(int _velocidad, int _forma, int _objetivo, int _activo)
{
	this->velocidad = _velocidad;
	this->forma = _forma;
	this->objetivo = _objetivo;
	this->activo = _activo;

}
void Proyectil::movimiento()
{
	cout << "cada misil tiene una velocidad de:" << velocidad;
}
void Proyectil::colicion()
{
}
void Proyectil::actualizar()
{
}