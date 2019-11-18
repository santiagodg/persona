#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

#include <string>
#include <iostream>
using namespace std;

class Estudiante: public Persona
{
	private:
		string sMatricula;
		int iSemestre;
	public:
		Estudiante();
		Estudiante(string, int, string, int);
		void toString();
		// Getters / setters
};

Estudiante::Estudiante(): Persona()
{
	sMatricula = "A00000000";
	iSemestre = -1;
}

Estudiante::Estudiante(string sN, int iE, string sM, int iS): Persona(sN, iE)
{
	sMatricula = sM;
	iSemestre = iS;
}

void Estudiante::toString()
{
	this -> Persona::toString();
	cout << "Matricula: " << sMatricula << endl;
	cout << "Semestre: " << iSemestre << endl;
}

#endif
