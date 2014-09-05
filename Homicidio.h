#pragma once
#include <string>
#include "Caso.h"

using std::string;

class Homicidio:public Caso{
	vector<string> nombres;
	string sospechoso;
	string victima;
  public:
  	Homicidio(int,vector<Investigador>,vector<Evidencia>, string, string ,bool,vector<string>,string,string);
	virtual string toString() const;
	vector<string> getNombres() const;
	string getSospechoso() const;
	string getVictima() const;
	void setNombres(vector<string>);
	void setSospechoso(string);
	void setVictima(string);
};
