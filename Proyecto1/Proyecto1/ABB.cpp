#include "ABB.h"

ABB::ABB() {
	raiz = NULL;
}

void ABB::insertar( int _valor) {
	NodoBinario* nuevo = new NodoBinario(_valor);

	if ( raiz == NULL ) {//SI LA RAIZ ESTA VACIA SE INGRESA
		raiz = nuevo;
	} else {// SI LA RAIZ CONTIENE ALGUN HIJO

		//SE CREA UN NODO PUNTERO QUE HACE REFERENCIA A LA RAIZ
		NodoBinario* aux = raiz;
		NodoBinario* auxP = raiz;

		while (aux != NULL ) {
			if ( nuevo->valor > aux->valor) { //SI EL VALOR QUE SE QUIERE INGRESAR ES MAYOR QUE EL NODO ACTUAL SE MUEVE A LA DERECHA
				auxP = aux;
				aux = aux->derecha;				
			} else { // SINO QUIERE DECIR QUE ES MENOR, ENTONCES SE MUEVE A LA IZQUIERDA
				auxP = aux;
				aux = aux->izquierda;				
			}
		}

		if (nuevo->valor > auxP->valor ) {
			nuevo->padre = auxP;
			auxP->derecha = nuevo;
		} else {
			nuevo->padre = auxP;
			auxP->izquierda = nuevo;
		}


	}

}

void ABB::imprimir() {

	//recorrido( raiz );
	//recorridoPreOrden( raiz );
	recorridoPostOrden( raiz );
}

void ABB::recorrido(NodoBinario* r) {
	if ( r != NULL) {
		recorrido(r->izquierda);
		cout << " " << r->valor;
		recorrido( r->derecha );
	}
}

void ABB::recorridoPreOrden( NodoBinario* r) {

	if ( r != NULL ) {
	
		cout << " " << r->valor;
		recorridoPreOrden( r->izquierda );
		recorridoPreOrden( r->derecha );

	}

	

}

void ABB::recorridoPostOrden( NodoBinario* r) {

	if(r != NULL){
		recorridoPostOrden( r->izquierda );
		recorridoPostOrden( r->derecha );
		cout << " " << r->valor;
	}

}
