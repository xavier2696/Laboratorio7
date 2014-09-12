#pragma once
#include "investigador.h"
#include "persona.h"
#include "Evidencias.h"
#include <string>
#include <vector>
using namespace std;
using std::string;

class Caso{
	int numero;
	vector<Investigador> investigadores;
	vector<Evidencia> evidencias;
	string hora;
	string fecha;
	bool cerrado;
  public:
    Caso(int,vector<Investigador>,vector<Evidencia>, string, string ,bool);
	int getNumero() const;
	vector<Investigador> getInvestigadores() const;
	vector<Evidencia> getEvidencias() const;
	string getHora() const;
	string getFecha() const;
	bool isCerrado() const;
	void setNumero(int);
	void setInvestigadores(vector<Investigador>);
	void setEvidencias(vector<Evidencia>);
	void setHora(string);
	void setFecha(string);
	void setCerrado(bool);
	virtual string toString() const=0;
};
