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
	int capacidadDeDaño;
	int alcance;

	int getcapacidadDedaño() { return capacidadDeDaño; }
	void setcapacidadDeDaño(int _capacidadDeDaño) { capacidadDeDaño = _capacidadDeDaño; }
	int getancho() { return ancho; }
	void setancho(int _ancho) { ancho = _ancho; }
	int getalcance() { return alcance; }
	void setalcance(int _alcance) { alcance = _alcance; }
	int getenergia() { return energia; }
	void setenergia(int _energia) { energia = _energia; }


	Podadoras(int, int, int, int);
	void ataque();

};

