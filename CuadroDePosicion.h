#pragma once
#include <iostream>
using namespace std;

class CuadroDePosicion//o terreno
{
	float posicionx;
	float posiciony;
	int direccionx;
	int direcciony;
	int ancho;
	int alto;
	int celda;//Matriz que representa las celdas del terreno
	float fondo; //imagen

	int getancho() { return ancho; }
	void setancho(int _ancho) { ancho = _ancho; }
	int getalto() { return alto; }
	void setalto(int _alto) { alto = _alto; }
	int getcelda() { return celda; }
	void setcelda(int _celda) { celda = _celda; }
	int getfondo() { return fondo; }
	void setfondo(int _fondo) { fondo = _fondo; }



	CuadroDePosicion(int, int, int, int);
	void inicializarTerreno();
	void colocarElementos();
	void removerElementos();
	void verificraCeldaVacia();
	void verificarColicion();
	void actualizar();
	void manejarEventos();
};

