#pragma once
#include "persona.h"
<<<<<<< HEAD
#include<string>
using namespace std;
class Investigador: public Persona{
=======
#include "Caso.h"
#include <string>
using namespace std;

class Investigador : public Persona {
>>>>>>> 168988423e814213e70ab32a48a8095f9e44c4d0
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
};
