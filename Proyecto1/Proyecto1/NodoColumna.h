#pragma once
#include <iostream>
#include "NodoContenido.h"

using namespace std;

class NodoColumna {

	public:
	int indice;
	NodoColumna* siguiente;
	NodoColumna* anterior;
	NodoContenido* abajo;


	NodoColumna();
	NodoColumna(int);

	void insertarContenido(NodoContenido*);
	void imprimirContenido();




};

