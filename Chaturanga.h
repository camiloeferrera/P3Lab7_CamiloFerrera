#ifndef CHATURANGA_H
#define CHATURANGA_H

#include <string>
#include "Tablero.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Chaturanga
{
	public:
		Chaturanga();
		~Chaturanga();
		
		void jugar();
		void imprimirTablero();
	protected:
		Tablero* tablero;
};

#endif
