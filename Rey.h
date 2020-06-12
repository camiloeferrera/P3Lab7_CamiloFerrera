#ifndef REY_H
#define REY_H

#include "Pieza.h"

class Rey : public Pieza
{
	public:
		Rey(char,int,int);
		~Rey();
		
		bool movimientoValido(int,int,Pieza***);
	protected:
};

#endif
