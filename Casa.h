#pragma once
#include <iostream>
using namespace std;

class Casa
{
	float posicionx;
	float posiciony;
	int imagen;
	int nivelDeproteccion;

	int getimagen() { return imagen; }
	void setimagen(int _imagen) { imagen = _imagen; }
    
	int getnivelDeproteccion() {return nivelDeproteccion;}
	void setnivelDeproteccion(int _nivelDeproteccion) { nivelDeproteccion = _nivelDeproteccion; }


	Casa(int, int );
	void proteccion();

};

