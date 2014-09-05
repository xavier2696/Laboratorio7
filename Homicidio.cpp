#include "Homicidio.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Homicidio::Homicidio(int numero,Investigador* investigadores,Evidencia* evidencias, string fecha, string hora,bool cerrado,string* nombres ,string sospechoso ,string victima):Caso(numero,investigadores,evidencias,fecha,hora,cerrado),nombres(nombres),sospechoso(sospechoso),victima(victima){}

Homicidio::~Homicidio(){
	delete nombres;
}

string Homicidio::toString() const{
}
string* Homicidio::getNombres() const{
	return nombres;
}
string Homicidio::getSospechoso() const{
	return sospechoso;
}
string Homicidio::getVictima() const{
	return victima;
}
void Homicidio::setNombres(string* nombres){
	this->nombres = nombres;
}
void Homicidio::setSospechoso(string sospechoso){
	this->sospechoso = sospechoso;
}
void Homicidio::setVictima(string homicidio){
	this->victima = victima;
}
