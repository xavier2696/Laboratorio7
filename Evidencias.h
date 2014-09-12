#pragma once
#include <iostream>
#include <string>
using namespace std;
class Evidencia{
	    string nombre;
		string tipo_objeto; //arma blanca arma de fuego evidencia circunstancial
		string lugar_encontrado;
		bool huella;
		bool procesada;
	public:
		//constructor
		Evidencia(string,string,string,bool,bool);
		//los set
		void setnombre(string);
		void settipo_objeto(string);
		void setlugar_encontrado(string);
		void sethuella(bool);
		void setprocesada(bool);
		//los get
		string getnombre();
		string gettipo_objeto();
		string getlugar_encontrada();
		bool   gethuella();
		bool   getprocesada();
		//tostrinh
		string toString()const;
	};
