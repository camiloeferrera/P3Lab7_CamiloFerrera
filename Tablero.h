#ifndef TABLERO_H
#define TABLERO_H

#include "Pieza.h"
#include "Infanteria.h"


class Tablero
{
	public:
		Tablero();
		~Tablero();
		
		Pieza* getPieza(int,int);
		Pieza*** getTablero();
	protected:
		Pieza*** tablero;
};

#endif
