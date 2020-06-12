#include "Chaturanga.h"

Chaturanga::Chaturanga()
{
	tablero = new Tablero();
}

Chaturanga::~Chaturanga()
{
	delete tablero;
}

void Chaturanga::jugar()
{
	string coordenadas;
	
	imprimirTablero();
	int i,j,x,y;
	
	
	cout << endl << "Ingrese coordenadas: "; cin >> coordenadas;
	
	i = (int)coordenadas[0] - 48;
	
	cout << i << endl;
	
	/*if (this->tablero->getPieza(i,j)->movimientoValido(x,y,this->tablero->getTablero())){
		this->tablero->getTablero()[x][y] = this->tablero->getPieza(i,j);
		this->tablero->getTablero()[i][j] = NULL;
	}*/
}

void Chaturanga::imprimirTablero()
{
	cout << "  ";
	for (int i = 0; i < 8; i++){
		char c = 65+i;
		cout << " " << c << " ";
	}
	
	cout << endl;
	
	for (int i = 0; i < 8; i++){
		char c = 65+i;
		cout << i << " ";
		for (int j = 0; j < 8; j++){
			if (tablero->getPieza(i,j) == NULL){
				cout << " . ";
			} else{
				cout << " " << tablero->getPieza(i,j)->getChar() << " ";	
			}
			
		}
		cout << endl;;
	}
}
