#include "Rey.h"

Rey::Rey(char caracter, int i, int j):Pieza(caracter,i,j)
{
}

Rey::~Rey()
{
}

bool Rey::movimientoValido(int x, int y,Pieza*** tablero)
{
	if ((x == i-1 || x == i+1 || x == i) && (y == j-1 || y == j+1 || y == j)){
		return false;
	}
	
	i = x;
	j = y;
	
	return true;
}
