#include "Tablero.h"

Tablero::Tablero()
{
	tablero = new Pieza **[8];
	
	for(int i = 0; i < 8; i++){
		tablero[i] = new Pieza*[8];
	}
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			tablero[i][j] = NULL;
		}
	}
	
	tablero[0][0] = new Infanteria('I',0,0);
}

Tablero::~Tablero()
{
	for (int i = 0; i < 8; i ++){
		for (int j = 0; j < 8; j++){
			delete tablero[i][j];
			tablero[i][j] = NULL;	
		}
	}
	
	for (int i = 0; i < 8; i++){
		delete[] tablero[i];
	}
		
	delete[] tablero;
}

Pieza* Tablero::getPieza(int i, int j)
{
	return this->tablero[i][j];
}
Pieza*** Tablero::getTablero()
{
	return this->tablero;
}
