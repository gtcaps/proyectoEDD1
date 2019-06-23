#include "NodoColumna.h"

NodoColumna::NodoColumna() {
	indice = -1;
	siguiente = NULL;
	anterior = NULL;
}

NodoColumna::NodoColumna( int _indice) {
	indice = _indice;
	siguiente = NULL;
	anterior = NULL;
}

void NodoColumna::insertarContenido( NodoContenido* nuevo) {


	if ( abajo == NULL) { // SI LA LISTA SE ENCUENTRA VACIA
		abajo = nuevo;
	} else { // SI LA LISTA CONTINE ELEMENTOS DENTRO

		//SE CREAN DOS NODOS DE TIPO PUNTERO QUE GUARDAN EL INICIO Y EL FINAL DE LA LISTA
		NodoContenido* cabeza = abajo;
		NodoContenido* cola = abajo;

		//SE BUSCA EL FINAL DE LA LISTA Y SE GUARDA EN EL PUNTERO COLA
		while ( cola->abajo != NULL ) {
			cola = cola->abajo;
		}

		if ( nuevo->fila < cabeza->fila ) {//SI LA FILA DEL NODO NUEVO ES MENOR QUE LA FILA DE LA CABEZA, SE INGRESA AL PRINCIPIO
			cabeza->arriba = nuevo;
			nuevo->abajo = cabeza;
			abajo = nuevo;
		} else if ( nuevo->fila > cola->fila ) {//SI LA FILA DEL NODO NUEVO ES MAYOR QUE LA FILA DE LA COLA, SE INGRESA AL FINAL
			nuevo->arriba = cola;
			cola->abajo = nuevo;
			cola = nuevo;
		} else { //SI LA FILA DEL NODO SE ENCUENTRA ENTRE LA CABEZA Y LA COLA, SE INGRESA EN MEDIO
			//SE CREAN DOS PUNTEROS AUXILIARES QUE VAN A MANEJAR LOS PUNTEROS DE LOS NODOS
			//ENTRE LOS CUALES SE DESEA INGRESAR EL NUEVO NODO
			NodoContenido* actual = abajo;
			NodoContenido* anterior = abajo;

			while ( actual->fila < nuevo->fila) {
				anterior = actual;
				actual = actual->abajo;
			}

			nuevo->anterior = anterior;
			nuevo->abajo = actual;
			anterior->abajo = nuevo;
			actual->arriba = nuevo;

		}
	
	}


}

void NodoColumna::imprimirContenido() {

	NodoContenido* aux = abajo;
	NodoContenido* auxC = abajo;

	//OBTENER EL ULTIMO ELEMENTO DE LA LISTA
	while ( auxC->abajo != NULL ) {
		auxC = auxC->abajo;
	}

	//RECORRER LA LISTA DE ARRIBA A ABAJO
	while ( aux != NULL) {
		cout << "COLUMNA (" << aux->fila << "," << aux->columna << ") - " << aux->valor << " -----> ";
		aux = aux->abajo;
	}

	cout << endl;

	//RECORRER LA LISTA DE ABAJO A ARRIBA
	while (auxC != NULL ) {
		cout << "COLUMNA (" << auxC->fila << "," << auxC->columna << ") -" << auxC->valor << " -----> ";
		auxC = auxC->arriba;
	}

	cout << endl << endl;

}
