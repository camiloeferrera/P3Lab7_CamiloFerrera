#include "Torre.h"

Torre::Torre(char caracter, int i, int j):Pieza(caracter,i,j)
{
}
Torre::~Torre()
{
}

bool Torre::movimientoValido(int x, int y, Pieza*** tablero)
{
	if(x==i || y==j){
		i == x;
		j == y;
		return true;
	}
	
	return false;
}
