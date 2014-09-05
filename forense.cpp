#include "persona.h"
#include "forense.h"
#include "Caso.h"
#include<sstream>
#include<string>
#include<typeinfo>
Forense::Forense(string nombre,string usuario,string password,int edad
,string id,string fecha,string ingreso,string horario):Persona(nombre,usuario,password,edad,id,fecha),ingreso(ingreso),horario(horario){}
string Forense::toString()const{
	stringstream ss;
	ss<<Persona::toString()<<"\nIngreso: "<<ingreso<<"\nHorario: "<<horario;
	return ss.str();
}
string Forense::getIngreso()const{
	return ingreso;
}
string Forense::getHorario()const{
	return horario;
}
void Forense::setIngreso(string ingreso){
	this->ingreso=ingreso;
}
void Forense::setHorario(string horario){
	this->horario=horario;
}
void Forense:: visualizar(Caso *c){
	if(typeid(c)==typeid(Homicidio*)
		cout<<c->toString()<<endl
		if(typeid(c)==typeid(Homicidio*)
			cout<<c->toString()<<endl;
}
