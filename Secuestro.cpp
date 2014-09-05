#include "Secuestro.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Secuestro::Secuestro(int numero,vector<Investigador> investigadores,vector<Evidencia> evidencias, string fecha, string hora,bool cerrado,string victima,string motivo,string lugar,bool rescate,int cantidad,bool vivo):Caso(numero,investigadores,evidencias,fecha,hora,cerrado),victima(victima),motivo(motivo),lugar(lugar),rescate(rescate),cantidad(cantidad),vivo(vivo){
}
string Secuestro::toString() const{
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
	ss<<"\nVictima: "<<victima<<"\nMotivo: "<<motivo<<"\nLugar: "<<lugar<<"\nRescate: "<<(isRescate()?"Si":"No")<<"\nCantidad: "<<cantidad<<"\nVivo: "<<(isVivo()?"Si":"No");
	return ss.str();
}
string Secuestro::getVictima() const{
	return victima;
}
string Secuestro::getMotivo() const{
	return motivo;
}
string Secuestro::getLugar() const{
	return lugar;
}
bool Secuestro::isRescate() const{
	return rescate;
}
int Secuestro::getCantidad() const{
	return cantidad;
}
bool Secuestro::isVivo() const{
	return vivo;
}
void Secuestro::setVictima(string victima){
	this->victima = victima;
}
void Secuestro::setMotivo(string motivo){
	this->motivo = motivo;
}
void Secuestro::setLugar(string lugar){
	this->lugar = lugar;
}
void Secuestro::setRescate(bool rescate){
	this->rescate = rescate;
}
void Secuestro::setCantidad(int cantidad){
	this->cantidad = cantidad;
}
void Secuestro::setVivo(bool vivo){
	this->vivo  =vivo;	
}
