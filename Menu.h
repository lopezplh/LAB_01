#pragma once
class Menu
{
	int numeroOpciones;
	int opccionSeleccionada;

	int getnumeroOpciones() {
		return numeroOpciones;
	}
	void setopccionSeleccionada(int _numeroOpciones) {
		numeroOpciones = _numeroOpciones;
	}
	

	Menu(int);
	int seleccionarOpcion();
	int mostrarMenu();
	void activarOpcion();
};

