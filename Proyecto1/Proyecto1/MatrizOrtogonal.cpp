#include "MatrizOrtogonal.h"

void MatrizOrtogonal::insertar( string _valor , int _fila , int _columna ) {
	//SE GUARDA LA INFORMACIÓN EN UN NODO CONTENIDO DE TIPO PUNTERO 
	NodoContenido* nuevo = new NodoContenido(_valor, _fila, _columna);



	//INSERTAR LA FILA SI NO EXISTE
	//EL METODO VERIFICA SI EXISTE EL INDICE DE LA FILA QUE SE VA A USAR, Y SI DEVUELVE UN FALSE
	//SE PROCEDE A CREAR LA FILA
	if ( !filas->existeIndice(_fila)) {
		filas->insertarIndice( _fila );
	}


	//INSERTAR LA COLUMNA SI NO EXISTE
	//EL METODO VERIFICA SI EXISTE EL INDICE DE LA COLUMNA QUE SE VA A USAR, Y SI DEVUELVE UN FALSE
	//SE PROCEDE A CREAR LA COLUMNA
	if ( !columnas->existeIndice( _columna ) ) {
		columnas->insertarIndice( _columna );
	}


	//OBTENER LOS PUNTEROS DE LA FILA Y DE LA COLUMNA EN DONDE SE DESEA INGRESAR EL DATO
	NodoFila* fila = filas->obtenerIndice( _fila );
	NodoColumna* columna = columnas->obtenerIndice( _columna );


	//SE ACCEDE AL METODO INGRESAR_CONTENIDO DEL NODO FILA Y DEL NODO COLUMNA Y SE INGRESA
	//EL NODO NUEVO QUE SE CREO AL PRINCIPIO, ESTO VA A HACER QUE AL INGRESAR EL PUNTERO
	//DEL NODO NUEVO EN LOS NODOS FILA Y COLUMNA, VAN A ESTAR APUNTANDO AL MISMO

	fila->insertarContenido(nuevo);
	columna->insertarContenido(nuevo);

	cout << endl << "DATO INGRESADO CORRECTAMENTE = [ " << _valor << " | " << _fila << " | " << _columna << " ]" << endl;


}

void MatrizOrtogonal::imprimir() {

	filas->imprimirFilas();
	columnas->imprimirColumnas();

}
