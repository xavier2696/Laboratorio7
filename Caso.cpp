#include "Caso.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Caso::Caso(int numero,vector<Evidencia*> evidencias, string hora, string fecha,bool cerrado):numero(numero),evidencias(evidencias),hora(hora),fecha(fecha),cerrado(cerrado){
}
int Caso::getNumero() const{
	return numero;
}
vector<Evidencia*> Caso::getEvidencias() const{
	return evidencias;
}
string Caso::getHora() const{
	return hora;	
}
string Caso::getFecha() const{
	return fecha;
}
bool Caso::isCerrado() const{
	return cerrado;	
}
void Caso::setNumero(int numero){
	this->numero = numero;
}
void Caso::setEvidencias(vector<Evidencia*> evidencias){
	this->evidencias = evidencias;
}
void Caso::setHora(string hora){
	this->hora = hora;
}
void Caso::setFecha(string fecha){
	this->fecha = fecha;
}
void Caso::setCerrado(bool cerrado){
	this->cerrado = cerrado;
}
