#include "Pieza.h"

Pieza::Pieza(char caracter, int i, int j)
{
	this->caracter = caracter;
	this->i= i;
	this->j= j;
}
Pieza::~Pieza()
{
}

char Pieza::getChar()
{
	return this->caracter;
}

void Pieza::setChar(char caracter)
{
	this->caracter = caracter;
}
