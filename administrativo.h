#include "persona.h"
#include<string>
using namespace std;
class Administrativo: public Persona{
	string clave;
	string puesto;
	public:
	Administrativo(string,string,string,int,string,string,string,string);
	//virtual void visualizar(Caso)const;
	virtual string toString()const;
	string getClave()const;
	string getPuesto()const;
	void setClave(string);
	void setPuesto(string);
};
