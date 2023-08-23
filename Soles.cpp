#include "Soles.h"
#include <iostream>
using namespace std;

Soles::Soles(int _cantidad)
{
	this->cantidad = _cantidad;
}
void Soles::recolectarSoles()
{
	cout << "de cada girazol se puede recolectar una cantidad de soles:" << cantidad;
}
void Soles::gastarSoles()
{
	cout << "para desbloquear un elemto se nececita una cantidad de soles:" << cantidad;
}
void Soles::actualizarSoles()
{
}