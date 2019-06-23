#pragma once
#include <iostream>

using namespace std;

class NodoBinario {

	public:
	int valor;
	NodoBinario* padre;
	NodoBinario* izquierda;
	NodoBinario* derecha;

	NodoBinario();
	NodoBinario( int );

};

