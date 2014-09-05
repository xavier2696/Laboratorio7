#include "Caso.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Caso::Caso(int numero,Investigador* investidagores,Evidencia* evidencias, string hora, string fecha,bool cerrado):numero(numero),investigadores(investigadores),evidencias(evidencias),hora(hora),fecha(fecha),cerrado(cerrado){
}
Caso::~Caso(){
	delete investigadores;
	delete evidencias;
}
int Caso::getNumero() const{
	return numero;
}
Investigador* Caso::getInvestigadores() const{
	return investigadores;
}
Evidencia* Caso::getEvidencias() const{
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
void Caso::setInvestigadores(Investigador* investigadores){
	this->investigadores = investigadores;
}
void Caso::setEvidencias(Evidencia* evidencias){
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
