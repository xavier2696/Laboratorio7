#include "Homicidio.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Homicidio::Homicidio(int numero,vector<Investigador> investigadores,vector<Evidencia> evidencias, string fecha, string hora,bool cerrado,vector<string> nombres ,string sospechoso ,string victima):Caso(numero,investigadores,evidencias,fecha,hora,cerrado),nombres(nombres),sospechoso(sospechoso),victima(victima){}


string Homicidio::toString() const{
	stringstream ss;
	ss<<"Caso Numero: "<<getNumero()<<"\nInvestigadores: ";
	for(int i = 0; i<getInvestigadores().size(); i++){
		ss<<getInvestigadores()[i].getNombre()<<", ";	
	}
	ss<<"\nEvidencias: ";
	for (int i = 0; i<getEvidencias().size(); i++){
		ss<<getEvidencias()[i].getnombre()<<", ";	
	}
	ss<<"\nFecha: "<<getFecha()<<"\nHora: "<<getHora()<<"Cerrado: "<<isCerrado()?"Si":"No";
	ss<<"\nNombres Sospechosos: ";
	for (int i = 0; i<nombres.size(); i++){
		ss<<nombres[i]<<",";	
	}
	ss<<"\nSospechoso: "<<sospechoso<<" \nVictima: "<<victima<<"\n";
	return ss.str();
}
vector<string> Homicidio::getNombres() const{
	return nombres;
}
string Homicidio::getSospechoso() const{
	return sospechoso;
}
string Homicidio::getVictima() const{
	return victima;
}
void Homicidio::setNombres(vector<string> nombres){
	this->nombres = nombres;
}
void Homicidio::setSospechoso(string sospechoso){
	this->sospechoso = sospechoso;
}
void Homicidio::setVictima(string homicidio){
	this->victima = victima;
}
