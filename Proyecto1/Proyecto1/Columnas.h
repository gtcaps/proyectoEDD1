#pragma once
#include <iostream>
#include "NodoColumna.h"

using namespace std;

class Columnas {

	public:
	NodoColumna* cabeza;
	NodoColumna* cola;

	Columnas();
	void insertarIndice(int);
	bool existeIndice(int);
	NodoColumna* obtenerIndice(int);
	void imprimirColumnas();


};

