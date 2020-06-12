#ifndef INFANTERIA_H
#define INFANTERIA_H

#include "Pieza.h"

class Infanteria : public Pieza
{
	public:
		Infanteria(char,int,int);
		~Infanteria();
		
		bool movimientoValido(int,int,Pieza***);
	protected:
};

#endif
