#include <iostream>
#include "MatrizOrtogonal.h"
#include "ABB.h"

using namespace std;

int main() {

	
	/*MatrizOrtogonal* m = new MatrizOrtogonal();
	m->insertar( "Jose Est" , 0 , 0 );
	m->insertar( "Marc Est" , 0 , 2 );
	m->insertar( "Juli Est" , 0 , 3 );
	m->insertar( "Marc Com" , 2 , 2 );
	m->insertar( "Juli Com" , 2 , 3 );
	m->insertar( "Marc Leng" , 4 , 2 );
	m->insertar( "Juli Leng" , 4 , 3 );
	m->insertar( "Pame Leng" , 4 , 4 );*/


	ABB* arbol = new ABB();
	arbol->insertar( 8 );
	arbol->insertar( 3 );
	arbol->insertar( 10 );
	arbol->insertar( 1 );
	arbol->insertar( 6 );
	arbol->imprimir();


	return 0;
}