#pragma once
#include <iostream>
#include <string>
#include "Columnas.h"
#include "Filas.h"
#include "NodoContenido.h"

class MatrizOrtogonal {

	public: 
	Columnas* columnas;
	Filas* filas;

	MatrizOrtogonal() {
		columnas = new Columnas();
		filas = new Filas();
	}

	void insertar(string, int, int);
	void imprimir();


};

