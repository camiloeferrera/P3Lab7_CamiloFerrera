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
	
	for (int i = 0; i < 8; i++){
		tablero[1][i] = new Infanteria('I',1,i);
		tablero[6][i] = new Infanteria('L',6,i);
	}
	
	tablero[0][0] = new Torre ('T',0,0);
	tablero[0][1] = new Caballo ('C',0,1);
	tablero[0][2] = new Elefante('E',0,2);
	tablero[0][3] = new Rey ('R',0,3);
	tablero[0][4] = new Ministro('M',0,4);
	tablero[0][5] = new Elefante('E',0,5);
	tablero[0][6] = new Caballo ('C',0,6);
	tablero[0][7] = new Torre ('T',0,7);
	
	tablero[7][0] = new Torre('Y',7,0);
	tablero[7][1] = new Caballo ('O',7,1);
	tablero[7][2] = new Elefante('3',7,2);
	tablero[7][3] = new Ministro('W',7,3);
	tablero[7][4] = new Rey ('P',7,4);
	tablero[7][5] = new Elefante('3',7,5);
	tablero[7][6] = new Caballo ('O',7,6);
	tablero[7][7] = new Torre('Y',7,7);	
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
