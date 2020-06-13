#include "Ministro.h"

Ministro::Ministro(char caracter, int i, int j):Pieza(caracter,i,j)
{
}
Ministro::~Ministro()
{
}

bool Ministro::movimientoValido(int x, int y, Pieza*** tablero)
{
	if ((x == i+1 || x == i-1) && (y == j-1 || y == j+1)){
		i = x;
		j = y;
		return true;
	}
	
	return false;
}
