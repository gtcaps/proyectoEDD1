#include "NodoFila.h"

NodoFila::NodoFila() {
	indice = -1;
	abajo = NULL;
	arriba = NULL;
	siguiente = NULL;
}

NodoFila::NodoFila( int _indice ) {
	indice = _indice;
	abajo = NULL;
	arriba = NULL;
	siguiente = NULL;
}

void NodoFila::insertarContenido( NodoContenido* nuevo) {

	
	if ( siguiente == NULL ) {//SI SE ENCUENTRA VACIO LA LISTA DE CONTENIDO
		siguiente = nuevo;
	} else { //SI LA LISTA DE CONTENIDO CONTIENE VALORES

		//SE CREAN DOS PUNTEROS AUXILIARES PARA QUE APUNTEN AL INICIO Y AL FINAL DE LA LISTA DE
		//CONTENIDOS Y ASI MANEJAR LAS INSERCIONES
		NodoContenido* auxCabeza = siguiente;
		NodoContenido* auxCola = siguiente;

		//SE BUSCA EL FINAL DE LA LISTA Y SE GUARDA EN LA VARIABLE COLA
		while ( auxCola->siguiente != NULL ) {
			auxCola = auxCola->siguiente;
		}


		if ( nuevo->columna < auxCabeza->columna) {//SI LA COLUMNA DE NUEVO ES MENOR QUE LA DE LA CABEZA, SE INGRESA AL INICIO
			nuevo->siguiente = auxCabeza;
			auxCabeza->anterior = nuevo;
			siguiente = nuevo;
		} else if(nuevo->columna > auxCola->columna){ //SI LA COLUMNA DE NUEVO ES MAYOR QUE LA DE LA COLA, SE INGRESA AL FINAL
			auxCola->siguiente = nuevo;
			nuevo->anterior = auxCola;
			auxCola = nuevo;
		} else { // SI LA COLUMNA DE NUEVO ESTA ENTRE LA CABEZA Y LA COLA, SE INGRESA EN MEDIO
			//SE CREA UN PUNTERO ANTERIOR Y ACTUAL PARA GUARDAR LOS PUNTEROS
			//CUANDO ENCUENTRE LA POSICIÓN EN DONDE SE VA A INSERTAR
			NodoContenido* actual = siguiente;
			NodoContenido* anterior = siguiente;

			while ( actual ->columna < nuevo->columna) {
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

void NodoFila::imprimirContenido() {
	NodoContenido* aux = siguiente;
	NodoContenido* auxC = siguiente;

	//OBTENER EL ULTIMO ELEMENTO DE LA LISTA DE CONTENIDO
	while ( auxC->siguiente != NULL ) {
		auxC = auxC->siguiente;
	}

	//RECORRER LA LISTA DEL PRIMERO AL ULTIMO
	while ( aux != NULL ) {
		cout << "FILA (" << aux->fila << "," << aux->columna << ") - " << aux->valor << " -----> ";
		aux = aux->siguiente;
	}

	cout << endl;

	//RECORRER LA LISTA DEL ULTIMO AL PRIMERO
	while ( auxC != NULL ) {
		cout << "FILA (" << auxC->fila << "," << auxC->columna << ") - " << auxC->valor << " -----> ";
		auxC = auxC->anterior;
	}

	cout << endl << endl;

}
