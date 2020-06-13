#ifndef TORRE_H
#define TORRE_H

#include "Pieza.h"

class Torre : public Pieza
{
	public:
		Torre(char,int,int);
		~Torre();
		bool movimientoValido(int,int,Pieza***);
	protected:
};

#endif
