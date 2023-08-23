#include "Zombi.h"
#include <iostream>
using namespace std;

Zombi::Zombi()
{
}
void Zombi::moverse()
{
	posicionX += direccionX;
	posicionY += direccionY;
}
void Zombi::atacar()
{
}
void Zombi::morir()
{
	energia = 0;
}
void Zombi::comer(int _alimento)
{
	energia += _alimento;
}
