#include "Filas.h"

Filas::Filas() {
	cabeza = NULL;
	cola = NULL;
}

void Filas::insertarIndice(int _indice) {
	NodoFila* nuevo = new NodoFila(_indice);

	if ( cabeza == NULL ) { //SI LA LISTA SE ENCUENTRA VACIA
		cabeza = nuevo;
		cola = nuevo;
	} else { //SI LA LISTA CONTIENE ALGUN VALOR
		if ( _indice < cabeza->indice ) { // SI EL INDICE ES MENOR QUE LA CABEZA
			NodoFila* aux = cabeza;
			nuevo->abajo = cabeza;
			aux->arriba = nuevo;
			cabeza = nuevo;
		} else if(_indice > cola->indice) { //SI EL INDICE ES MAYOR QUE LA COLA
			NodoFila* aux = cola;
			nuevo->arriba = cola;
			aux->abajo = nuevo;
			cola = nuevo;
		} else { // SI EL INDICE SE ENCUENTRA EN MEDIO DE LA CABEZA Y LA COLA
			NodoFila* actual = cabeza;
			NodoFila* anterior = cabeza;

			while (actual->indice < _indice ) {
				anterior = actual;
				actual = actual->abajo;
			}

			nuevo->arriba = anterior;
			nuevo->abajo = actual;
			actual->arriba = nuevo;
			anterior->abajo = nuevo;


		}
	}

}

NodoFila* Filas::obtenerIndice( int _indice) {
	if ( cabeza->indice == _indice ) {
		return cabeza;
	} else if ( cola->indice == _indice ) {
		return cola;
	} else {
		NodoFila* aux = cabeza;
		while ( aux != cola ) {
			if ( aux->indice == _indice ) {
				return aux;
			}
			aux = aux->abajo;
		}
		return new NodoFila( -1 );
	}
}

bool Filas::existeIndice( int _indice ) {
	
		NodoFila* aux = cabeza;
		while ( aux != NULL ) {
			if ( aux->indice == _indice ) {
				return true;
			}
			aux = aux->abajo;
		}
		return false;

}

void Filas::imprimirFilas() {
	NodoFila* aux = cabeza;
	NodoFila* auxc = cola;

	while (aux != NULL ) {
		cout << "Fila: " << aux->indice << " -> ";
		aux = aux->abajo;
	}

	cout << endl;

	while ( auxc != NULL ) {
		cout << "Fila: " << auxc->indice << " -> ";
		auxc = auxc->arriba;
	}
	
	cout << endl;
}
