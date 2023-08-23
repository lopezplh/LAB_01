#include "Moneda.h"
#include <iostream>
using namespace std;

Moneda::Moneda(int _valor, int _imagen)
{
	this->valor = _valor;
	this->imagen = _imagen;
}
void Moneda::generadorDeMoneda()
{
	cout << "cada moneda tiene el valor de:" << valor;
}