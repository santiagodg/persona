#include "Persona.h"
#include "Estudiante.h"

#include <string>
#include <iostream>
using namespace std;

int main()
{
	Estudiante e1("Santiago", 20, "A01252554", 3);
	e1.toString();
	return 0;
}