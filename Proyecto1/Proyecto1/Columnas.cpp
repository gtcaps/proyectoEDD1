#include "Columnas.h"

Columnas::Columnas() {
	cabeza = NULL;
	cola = NULL;
}

void Columnas::insertarIndice(int _indice) {

	NodoColumna* nuevo = new NodoColumna( _indice );

	if ( cabeza == NULL ) {//SI NO HAY ELEMENTOS EN LA LISTA
		cabeza = nuevo;
		cola = nuevo;
	} else { //SI LA LISTA CONTIENE ELEMENTOS
		if ( _indice < cabeza->indice) { // SI EL INDICE ES MENOR QUE LA CABEZA
			NodoColumna* aux = cabeza;
			nuevo->siguiente = aux;
			aux->anterior = nuevo;
			cabeza = nuevo;
		} else if (_indice > cola->indice ) { // SI EL INDICE ES MAYOR QUE LA COLA
			NodoColumna* aux = cola;
			nuevo->anterior = aux;
			aux->siguiente = nuevo;
			cola = nuevo;
		} else { // SI EL INDICE SE ENCUENTRA DENTRO DE LA CABEZA Y LA COLA
			NodoColumna* actual = cabeza;
			NodoColumna* anterior = cabeza;

			while (actual->indice < _indice ) {
				anterior = actual;
				actual = actual->siguiente;
			}

			nuevo->siguiente = actual;
			nuevo->anterior = anterior;
			anterior->siguiente = nuevo;
			actual->anterior = nuevo;
		}
	}

}

bool Columnas::existeIndice(int _indice) {
	
		NodoColumna* aux = cabeza;

		while ( aux != NULL) {
			if ( aux->indice == _indice ) {
				return true;
			}

			aux = aux->siguiente;
		}
		return false;
	
	
}

NodoColumna* Columnas::obtenerIndice(int _indice) {
	if ( cabeza->indice == _indice) {
		return cabeza;
	} else if ( cola->indice == _indice ) {
		return cola;
	} else {
		NodoColumna* aux = cabeza->siguiente;
		while ( aux != cola ) {
			if ( aux->indice == _indice ) {
				return aux;
			}
			aux = aux->siguiente;
		}
		return new NodoColumna(-1);
	}
}

void Columnas::imprimirColumnas() {

	if ( cabeza == NULL ) {
		cout << "LA LISTA NO TIENE NINGU INDICE DE COLUMNA" << endl;
	} else {
		NodoColumna* aux = cabeza;
		NodoColumna* auxc = cola;

		while ( aux != NULL ) {
			cout << "Columna: " << aux->indice << " -> ";
			aux = aux->siguiente;
		}

		cout << endl;

		while ( auxc != NULL ) {
			cout << "Columna " << auxc->indice << " -> ";
			auxc = auxc->anterior;
		}

		cout << endl;
	}

	


}
