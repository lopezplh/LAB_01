#include "Pala.h"
#include <iostream>
using namespace std;

Pala::Pala(int _costo)
{
	this->costo = _costo;
}
void Pala::energia()
{
	cout << "la pala tiene la energia de " << 23;
}
void Pala::eliminarPlantas()
{
	cout << "eliminar las plantas utilizando la pala tiene el costo de:" << costo;
}