#include <iostream>

#include "Chaturanga.h"
#include "Pieza.h"
#include "Tablero.h"

int main(int argc, char** argv) {
	Chaturanga* juego = new Chaturanga();
	juego->jugar();
	
	delete juego;
}
