#include "persona.h"
#include "Caso.h"
#include<string>
using namespace std;
class Forense:public Persona{
	string ingreso;
	string horario;
	public:
	Forense(string,string,string,int,string,string,string,string);
	virtual string toString()const;
	string getIngreso()const;
	string getHorario()const;
	void setIngreso(string);
	void setHorario(string);
	virtual void visualizar(const Caso*);
};
