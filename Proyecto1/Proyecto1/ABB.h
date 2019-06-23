#pragma once
#include <iostream>
#include "NodoBinario.h"
#include <string>
using namespace std;

class ABB {

	public:
	NodoBinario* raiz;

	ABB();
	void insertar( int );
	void imprimir();
	void recorrido(NodoBinario*);
	void recorridoPreOrden(NodoBinario*);
	void recorridoPostOrden(NodoBinario*);
	



};

