#pragma once
class Zombi
{
	float posicionX;
	float posicionY;
	int direccionX;
	int direccionY;
	int energia;
	int fuerzaAtaque;
	int ancho;
	int alto;

	int getEnergia() { return energia; }
	void setEnergia(int _energia) { energia = _energia; }

	int getFuerzaAtaque() { return fuerzaAtaque; }
	void setFuerzaAtaque(int _fuerzaAtaque) { fuerzaAtaque = _fuerzaAtaque; }


	int getAncho() { return ancho; }
	void setAncho(int _ancho) { ancho = _ancho; }

	int getAlto() { return alto; }
	void setAlto(int _alto) { alto = _alto; }


	Zombi();
	void moverse();
	void atacar();
	void morir();
	void comer(int _alimento);
};

