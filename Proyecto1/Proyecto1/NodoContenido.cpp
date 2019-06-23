#include "NodoContenido.h"

NodoContenido::NodoContenido() {
	valor = "";
	fila = -1;
	columna = -1;
	siguiente = NULL;
	anterior = NULL;
	abajo = NULL;
	arriba = NULL;
}

NodoContenido::NodoContenido( string _valor, int _fila, int _columna) {
	valor = _valor;
	fila = _fila;
	columna = _columna;
	siguiente = NULL;
	anterior = NULL;
	abajo = NULL;
	arriba = NULL;
}


