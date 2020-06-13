#ifndef MINISTRO_H
#define MINISTRO_H

#include "Pieza.h"

class Ministro : public Pieza
{
	public:
		Ministro(char,int,int);
		~Ministro();
		
		bool movimientoValido(int,int,Pieza***);
	protected:
};

#endif
