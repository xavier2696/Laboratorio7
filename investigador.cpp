#include "persona.h"
#include "investigador.h"
#include "Caso.h"
#include<sstream>
#include<string>
Investigador::Investigador(string nombre,string usuario,string password,int edad,
string id,string fecha,int numerocasos,int cerrados,int sinresolver):Persona(nombre,usuario,password,edad,id,fecha),
numerocasos(numerocasos),cerrados(cerrados),sinresolver(sinresolver){}
string Investigador::toString()const{
	stringstream ss;
	ss<<Persona::toString()<<"\nNumero de Casos: "<<numerocasos<<"\nCasos Cerrados: "<<cerrados<<"\nCasos sin Resolver: "<<sinresolver;
	return ss.str();
}
int Investigador::getNumerocasos()const{
	return numerocasos;
}
int Investigador::getCerrados()const{
	return cerrados;
}
int Investigador::getSinResolver()const{
	return sinresolver;
}
void Investigador::setNumerocasos(int numerocasos){
	this->numerocasos=numerocasos;
}
void Investigador::setCerrados(int cerrados){
	this->cerrados=cerrados;
}
void Investigador::setSinResolver(int sinresolver){
	this->sinresolver=sinresolver;
}
void Investigador::visualizar(Caso*c)const{
	cout<<c->toString()<<endl;
}
