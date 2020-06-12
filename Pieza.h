#ifndef PIEZA_H
#define PIEZA_H

#include <iostream>

class Pieza
{
	public:
		Pieza(char,int,int);
		~Pieza();
		
		char getChar();
		void setChar(char);
		
		bool operator==(Pieza* der)
		{
			return this->caracter == der->getChar();
		}
		
		virtual bool movimientoValido(int,int,Pieza***) = 0;
	protected:
		char caracter;
		int i;
		int j;
};

#endif
