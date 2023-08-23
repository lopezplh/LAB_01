#pragma once
#include <iostream>

class Ecenario
{
	int ancho;
	int alto;
	float fondo;
	int listasDePlantas;
	int listaDeZombis;
	int listaDeProyectiles;
	int spawnerDeSoles;
	int spawnerDePala;
	int puntaje;
	int nivel;
	int condicionDeVictoria;
	int condicionDeDerrota;

	int getancho() { return ancho; }
	void setancho(int _ancho) { ancho = _ancho; }
	int getpuntaje() { return puntaje; }
	void setpuntaje(int _puntaje) { puntaje = _puntaje; }
	int getnivel() { return nivel; }
	void setnivel(int _nivel) { nivel = _nivel;}
	int getcondicionDeFictoria() { return condicionDeVictoria; }
	void setcondicionDeFicto(int _condicionDeVictoria){condicionDeVictoria = _condicionDeVictoria;	}
	int getcondicionDeDerrota() { return condicionDeDerrota; }
	void setcondicionDeFictoria(int _condicionDeDerrota) {condicionDeVictoria = _condicionDeDerrota;	}


	Ecenario(int, int,int, int);
	void inicio();
	void agregarPlantas();
	void eliminarPlantas();
	void agregarZombi();
	void lanzarProyectil();
	void generarSoles();
	void spawnerDeMonedas();
	void verificarCondicionVictoria();
	void verificarCondicionDerrota();
	void pausar();
	void Continuar();
	};

