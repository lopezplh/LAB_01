#include <iostream>
#include "Escenario.h"
using namespace std;

Ecenario::Ecenario(int _puntaje, int _nivel, int _condicionDeVictoria, int _condicionDeDerrota)
{
	this->puntaje = _puntaje;
	this->nivel = _nivel;
	this->condicionDeVictoria = _condicionDeVictoria;
	this->condicionDeDerrota = _condicionDeDerrota;
}
void Ecenario::inicio()
{
	cout << "iniar el juego"<<nivel;
}
void Ecenario::agregarPlantas()
{
	cout << "puede agreagr las platas ";
}
void Ecenario::eliminarPlantas()
{
}
void Ecenario::agregarZombi()
{
}
void Ecenario::lanzarProyectil()
{
	cout << "las plantas lanzan proyectiles";
}
void Ecenario::generarSoles()
{
	cout << "pude gener soles cada cierto tiempo";
}
void Ecenario::spawnerDeMonedas()
{
}
void Ecenario::verificarCondicionVictoria()
{
}
void Ecenario::verificarCondicionDerrota()
{
}
void Ecenario::pausar()
{
}
void Ecenario::Continuar()
{
	
	cout << "continuar el juego";
}