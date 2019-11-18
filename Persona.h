#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona
{
	protected:
		string sNombre;
		int iEdad;
	public:
		Persona();
		Persona(string, int);
		void toString();
		// Getters / Setters
};

Persona::Persona()
{
	sNombre = "N/A";
	iEdad = -1;
}

Persona::Persona(string sN, int iE)
{
	sNombre = sN;
	iE = iEdad;
}

void Persona::toString()
{
	cout << "Nombre: " << sNombre << endl;
	cout << "Edad: " << iEdad << endl;
}

#endif
