#pragma once
#include <iostream>
#include "NodoContenido.h"

class NodoFila {

	public:
	int indice;
	NodoFila* abajo;
	NodoFila* arriba;
	NodoContenido* siguiente;
	
	NodoFila();
	NodoFila( int );

	void insertarContenido(NodoContenido*);
	void imprimirContenido();


};

