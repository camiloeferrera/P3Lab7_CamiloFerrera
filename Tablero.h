#ifndef TABLERO_H
#define TABLERO_H

#include "Pieza.h"
#include "Infanteria.h"
#include "Rey.h"
#include "Ministro.h"
#include "Elefante.h"
#include "Torre.h"
#include "Caballo.h"


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
