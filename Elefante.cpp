#include "Elefante.h"

Elefante::Elefante(char caracter, int i , int j):Pieza(caracter,i,j)
{
}
Elefante::~Elefante()
{
}

bool Elefante::movimientoValido(int x, int y, Pieza*** tablero)
{
	if ((x == i+2 || x == i-2) && (y == j-2 || y == j+2)){
		i = x;
		j = y;
		return true;
	}
	
	return false;
}
