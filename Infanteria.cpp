#include "Infanteria.h"

Infanteria::Infanteria(char caracter,int i, int j):Pieza(caracter,i,j)
{
}
Infanteria::~Infanteria()
{
}

bool Infanteria::movimientoValido(int x,int y,Pieza*** tablero)
{
	if (x == i+1 && (y == j || y == j-1 || y == j+1)){
		if (y == j-1 || y == j+1){
			i = x;
			j = y;
			return true;
		} else {
			if (tablero[x][y] == NULL){
				i = x;
				j = y;
				return true;
			}
		}
			
	} else if (x == i-1 && (y == j || y == j-1 || y == j+1)){
		if (y == j-1 || y == j+1){
			i = x;
			j = y;
			return true;
		} else {
			if (tablero[x][y] == NULL){
				i = x;
				j = y;
				return true;
			}
		}
			
	}
	
	return false;
}
