#include "persona.h"
#include <sstream>
#include<string>
using namespace std;
Persona::Persona(string nombre,string usuario,string password,int edad,string id,string fecha):nombre(nombre),
usuario(usuario),password(password),edad(edad),id(id),fecha(fecha){}
string Persona::toString()const{
	stringstream ss;
	ss<<"Nombre: "<<nombre<<"\nUsuario: "<<usuario<<"\nPassword: "<<
	password<<"\nEdad: "<<edad<<"\nId: "<<id<<"\nFecha de nacimiento: "<<fecha;
	return ss.str();
}
string Persona::getNombre()const{
	return nombre;
}
string Persona::getUsuario()const{
	return usuario;
}
string Persona::getPassword()const{
	return password;
}
int Persona::getEdad()const{
	return edad;
}
string Persona::getId()const{
	return id;
}
string Persona::getFecha()const{
	return fecha;
}
void Persona::setNombre(string nombre){
	this->nombre=nombre;
}
void Persona::setUsuario(string usuario){
	this->usuario=usuario;
}

void Persona::setPassword(string password){
	this->password=password;
}
void Persona::setEdad(int edad){
	this->edad=edad;
}
void Persona::setId(string id){
	this->id=id;
}
void Persona::setFecha(string fecha){
	this->fecha=fecha;
}




