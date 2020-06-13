#ifndef ELEFANTE_H
#define ELEFANTE_H

#include "Pieza.h"

class Elefante : public Pieza
{
	public:
		Elefante(char,int,int);
		~Elefante();
		
		bool movimientoValido(int,int,Pieza***);
	protected:
};

#endif
