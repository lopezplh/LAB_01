#include "Podadoras.h"
#include <iostream>
using namespace std;

Podadoras::Podadoras(int _capacidadDeDa�o, int _ancho, int _alcance, int _energia)
{
	this->capacidadDeDa�o = _capacidadDeDa�o;
	this->ancho = _ancho;
	this->alcance = _alcance;
	this->energia = _energia;
}
void Podadoras::ataque()
{
	cout << "la podadora tiene el ataque con energia de:" << energia;
}