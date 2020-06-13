#include "Caballo.h"

Caballo::Caballo(char caracter, int i, int j):Pieza(caracter,i,j)
{
}
Caballo::~Caballo()
{
}

bool Caballo::movimientoValido(int x,int y,Pieza*** tablero)
{
	if (x == i-2 && (y == j+1 || y == j-1)){
		return true;
	} else if ( x == i-1 && (y == j+2 || y == j-2)){
		return true;
	} else if (x == i+2 && (y == j+1 || y == j-1)){
		return true;
	} else if (x == i+1 && (y == j+2 || y == j-2)){
		return true;
	}
	
	return false;
}
