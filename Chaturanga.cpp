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
	
	while (true){
		imprimirTablero();
		int i,j,x,y;
		
		
		cout << endl << "Ingrese coordenadas: "; cin >> coordenadas;
		
		if (coordenadas == "salir" || coordenadas == "SALIR" || coordenadas == "Salir"){
			break;
		} else {
			i = coordenadas[1] - 48;
			j = coordenadas[0] - 65;
			x = coordenadas[4] - 48;
			y = coordenadas[3] - 65;
			
			while (i < 0 || j >= 8 || x < 0 || y >= 8){
				cout << endl << "Coordenadas invalidas..." << endl
				<< "Ingrese coordenadas: "; cin >> coordenadas;
				i = coordenadas[1] - 48;
				j = coordenadas[0] - 65;
				x = coordenadas[4] - 48;
				y = coordenadas[3] - 65;
			}
			
			if (this->tablero->getPieza(i,j) != NULL){
				if (this->tablero->getPieza(i,j)->movimientoValido(x,y,this->tablero->getTablero())){
					this->tablero->getTablero()[x][y] = this->tablero->getPieza(i,j);
					this->tablero->getTablero()[i][j] = NULL;
				} else {
					cout << endl << "Este movimiento no es valido para esta pieza..." << endl << endl;
				}
			} else {
				cout << "Aqui no hay ninguna pieza..." << endl;
			}
		}
		
			
	}
	
		

}

void Chaturanga::imprimirTablero()
{
	cout << "   ";
	for (int i = 0; i < 8; i++){
		char c = 65+i;
		cout << " " << c << " ";
	}
	
	cout << endl << endl;
	
	for (int i = 0; i < 8; i++){
		char c = 65+i;
		cout << i << "  ";
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
