#pragma once
#include <iostream>
#include "NodoFila.h"

using namespace std;

class Filas {

	public:
	NodoFila* cabeza;
	NodoFila* cola;

	Filas();
	void insertarIndice(int);
	NodoFila* obtenerIndice(int);
	bool existeIndice( int );
	void imprimirFilas();




};

