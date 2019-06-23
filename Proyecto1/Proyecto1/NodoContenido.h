#pragma once
#include <iostream>
#include <string>
using namespace std;

class NodoContenido {

	public:
	string valor;
	int fila;
	int columna;
	NodoContenido* siguiente;
	NodoContenido* anterior;
	NodoContenido* abajo;
	NodoContenido* arriba;

	NodoContenido();
	NodoContenido(string, int, int);



};

