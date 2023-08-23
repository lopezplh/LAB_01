#include <iostream>
#include "Casa.h"
using namespace std;

Casa::Casa(int _imagen, int _nivelDeproteccion)
{
	this->imagen = _imagen;
	this->nivelDeproteccion = _nivelDeproteccion;
}
void Casa::proteccion()
{
	cout << "proteccion al maximo" << nivelDeproteccion<<endl;
}