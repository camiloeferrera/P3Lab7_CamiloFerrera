#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class Caballo : public Pieza
{
	public:
		Caballo(char,int,int);
		~Caballo();
		
		bool movimientoValido(int,int,Pieza***);
	protected:
};

#endif
