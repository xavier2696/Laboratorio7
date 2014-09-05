#pragma once
#include <string>
#include "investigador.h"
#include "persona.h"
#include "Evidencias.h"

using std::string;

class Caso{
	int numero;
	Investigador* investigadores;
	Evidencia* evidencias;
	string hora;
	string fecha;
	bool cerrado;
  public:
    Caso(int,Investigador*,Evidencia*, string, string ,bool);
	~Caso();
	int getNumero() const;
	Investigador* getInvestigadores() const;
	Evidencia* getEvidencias() const;
	string getHora() const;
	string getFecha() const;
	bool isCerrado() const;
	void setNumero(int);
	void setInvestigadores(Investigador*);
	void setEvidencias(Evidencia*);
	void setHora(string);
	void setFecha(string);
	void setCerrado(bool);
	virtual string toString() const=0;
};
