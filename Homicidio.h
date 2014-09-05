#pragma once
#include <string>
#include "Caso.h"

using std::string;

class Homicidio:public Caso{
	string* nombres;
	string sospechoso;
	string victima;
  public:
  	Homicidio(int,Investigador*,Evidencia*, string, string ,bool,string*,string,string);
	~Homicidio();
	virtual string toString() const;
	string* getNombres() const;
	string getSospechoso() const;
	string getVictima() const;
	void setNombres(string*);
	void setSospechoso(string);
	void setVictima(string);
};
