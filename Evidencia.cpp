#include "Evidencias.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 	Evidencia::Evidencia(string nombre,string tipo_objeto,string lugar_encontrado,bool huella,bool procesada){
 		this->nombre = nombre;
 		this->tipo_objeto=tipo_objeto;
 		this->lugar_encontrado=lugar_encontrado;
 		this->huella=huella;
 		this->procesada=procesada;
 	}
	//los set
	void Evidencia::setnombre(string nombre){
    this->nombre = nombre;
	}
	void Evidencia::settipo_objeto(string tipo_objeto){
          this->tipo_objeto=tipo_objeto;
	}
	void Evidencia::setlugar_encontrado(string lugar_encontrado){
		this->lugar_encontrado=lugar_encontrado;
	}
	void Evidencia::sethuella(bool huella){
		this->huella=huella;
	}
	void Evidencia::setprocesada(bool procesada){
		this->procesada=procesada;
	}
	//los get
	string Evidencia::getnombre(){
		return nombre;
	}
	string Evidencia::gettipo_objeto(){
		return tipo_objeto;
	}
	string Evidencia::getlugar_encontrada(){
		return lugar_encontrado;
	}
	bool   Evidencia::gethuella(){
		return huella;
	}
	bool   Evidencia::getprocesada(){
			return procesada;
	}
	//tostrinh
	string Evidencia::toString()const{
		stringstream ss;
		ss<<nombre<<tipo_objeto<<" "<<lugar_encontrado<<" "<<huella<<" "<<procesada;
		return ss.str();
	}
