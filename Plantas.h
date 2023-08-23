#pragma once
#include <iostream>
using namespace std;

class Plantas
{
	float posicionx;
	float posiciony;
	int direccionx;
	int direcciony;
	int energia;
	int fuerzaDeAtaque;
	int ancho;
	int alto;
	int tipo;
	int costoo;

	Plantas(int ancho, int alto);
	void movimiento(int, int);
	void ataque();
	void morir();

};

