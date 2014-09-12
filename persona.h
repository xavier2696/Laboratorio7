#pragma once
#include<string>

using namespace std;
class Persona{
	string nombre;
	string usuario;
	string password;
	int edad;
	string id;
	string fecha;
	public:
	Persona(string,string,string,int,string,string);
	virtual string toString() const;
	string getUsuario()const;
	string getPassword()const;
	int getEdad()const;
	string getId()const;
	string getFecha()const;
	void setNombre(string);
	void setUsuario(string);
	void setPassword(string);
	void setEdad(int);
	void setId(string);
	void setFecha(string);
};
