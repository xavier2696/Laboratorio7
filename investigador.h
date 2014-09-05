#pragma once
#include "persona.h"
#include "Caso.h"
#include <string>
class Investigador: public Persona{
	int numerocasos;
	int cerrados;
	int sinresolver;
	public:
	Investigador(string,string,string,int,string,string,int,int,int);
	virtual string toString()const;
	int getNumerocasos() const;
	int getCerrados() const;
	int getSinResolver() const;
	void setNumerocasos(int);
	void setCerrados(int);
	void setSinResolver(int);
	virtual void visualizar(const Caso*);
};
