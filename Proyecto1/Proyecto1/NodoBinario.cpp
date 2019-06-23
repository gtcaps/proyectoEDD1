#include "NodoBinario.h"

NodoBinario::NodoBinario() {
	valor = -1;
	padre = NULL;
	derecha = NULL;
	izquierda = NULL;
}

NodoBinario::NodoBinario( int _valor) {
	valor = _valor;
	padre = NULL;
	derecha = NULL;
	izquierda = NULL;
}
