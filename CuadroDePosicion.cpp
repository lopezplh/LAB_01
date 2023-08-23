#include <iostream>
#include "CuadroDePosicion.h"
using namespace std;

CuadroDePosicion::CuadroDePosicion(int _ancho, int _alto, int _celda, int _fondo)
{
	this->ancho = _ancho;
	this->alto = _alto;
	this->celda = _celda;
	this->fondo = _fondo;
}
void CuadroDePosicion::inicializarTerreno()
{
	cout << "posicionar los elementos en la" << celda;
}
void CuadroDePosicion::colocarElementos()
{
	cout << "colocar elementos en las" << celda << endl;
}
void CuadroDePosicion::removerElementos()
{
}
void CuadroDePosicion::verificraCeldaVacia()
{
}
void CuadroDePosicion::verificarColicion()
{
}
void CuadroDePosicion::actualizar()
{
}
void CuadroDePosicion::manejarEventos()
{
}