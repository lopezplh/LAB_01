#pragma once
class Podadoras
{
	float posicionx;
	float posiciony;
	int direccionx;
	int direcciony;
	int ancho;
	int alto;
	int energia;
	int capacidadDeDa�o;
	int alcance;

	int getcapacidadDeda�o() { return capacidadDeDa�o; }
	void setcapacidadDeDa�o(int _capacidadDeDa�o) { capacidadDeDa�o = _capacidadDeDa�o; }
	int getancho() { return ancho; }
	void setancho(int _ancho) { ancho = _ancho; }
	int getalcance() { return alcance; }
	void setalcance(int _alcance) { alcance = _alcance; }
	int getenergia() { return energia; }
	void setenergia(int _energia) { energia = _energia; }


	Podadoras(int, int, int, int);
	void ataque();

};

