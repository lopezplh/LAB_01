#pragma once
#include <iostream>
using namespace std;

class Pala
{
	float posicionx;
	float posiciony;
	int direccionx;
	int direcciony;
	int costo;
	//int spawnerDePala;

	int getcosto() { return costo; }
	void setcosto(int _costo) { costo = _costo; }

	Pala(int);
	void energia();
	void eliminarPlantas();

};

