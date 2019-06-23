#include <iostream>
#include "MatrizOrtogonal.h"

using namespace std;

int main() {

	
	MatrizOrtogonal* m = new MatrizOrtogonal();
	m->insertar( "Jose Est" , 0 , 0 );
	m->insertar( "Marc Est" , 0 , 2 );
	m->insertar( "Juli Est" , 0 , 3 );
	m->insertar( "Marc Com" , 2 , 2 );
	m->insertar( "Juli Com" , 2 , 3 );
	m->insertar( "Marc Leng" , 4 , 2 );
	m->insertar( "Juli Leng" , 4 , 3 );
	m->insertar( "Pame Leng" , 4 , 4 );



	return 0;
}