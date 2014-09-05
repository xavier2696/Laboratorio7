#include "persona.h"
#include "administrativo.h"
#include "Caso.h"
#include "Secuestro.h"
#include<string>
#include<sstream>
#include<typeinfo>
using namespace std;
Administrativo::Administrativo(string nombre,string usuario,string password,int edad,string id,string fecha,string clave,string puesto)
:Persona(nombre,usuario,password,edad,id,fecha),clave(clave),puesto(puesto){}
string Administrativo::toString()const{
	stringstream ss;
	ss<<Persona::toString()<<"\nClave: "<<clave<<"\nPuesto: "<<puesto;
	return ss.str();
}
string Administrativo::getClave()const{
	return clave;
}
string Administrativo::getPuesto()const{
	return puesto;
}
void Administrativo::setClave(string clave){
	this->clave=clave;
}
void Administrativo::setPuesto(string puesto){
	this->puesto=puesto;
}
void Administrativo::visualizar(const Caso *c){
	if(typeid(c)==typeid(Secuestro*))
		cout<<c->toString()<<endl;
	 
}


