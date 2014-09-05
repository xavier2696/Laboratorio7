#pragma once
#include "Caso.h"
#include <string>

using std::string;

class Secuestro:public Caso{
	string victima;
	string motivo;
	string lugar;
	bool rescate;
	int cantidad;
	bool vivo;
  public:
	Secuestro(int,vector<Investigador>,vector<Evidencia>, string, string ,bool,string,string,string,bool,int,bool);
	virtual string toString() const;
	string getVictima() const;
	string getMotivo() const;
	string getLugar() const;
	bool isRescate() const;
	int getCantidad() const;
	bool isVivo() const;
	void setVictima(string);
	void setMotivo(string);
	void setLugar(string);
	void setRescate(bool);
	void setCantidad(int);
	void setVivo(bool);	
};
