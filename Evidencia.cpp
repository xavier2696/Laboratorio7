#include "Evidencias.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 	Evidencias::Evidencias(string nombre,string tipo_objeto,string lugar_encontrado,bool huella,bool procesada){
 		this->nombre = nombre;
 		this->tipo_objeto=tipo_objeto;
 		this->lugar_encontrado=lugar_encontrado;
 		this->huella=huella;
 		this->procesada=procesada;
 	}
	//los set
	void Evidencias::setnombre(string nombre){
    this->nombre = nombre;
	}
	void Evidencias::settipo_objeto(string tipo_objeto){
          this->tipo_objeto=tipo_objeto;
	}
	void Evidencias::setlugar_encontrado(string lugar_encontrado){
		this->lugar_encontrado=lugar_encontrado;
	}
	void Evidencias::sethuella(bool huella){
		this->huella=huella;
	}
	void Evidencias::setprocesada(bool procesada){
		this->procesada=procesada;
	}
	//los get
	string Evidencias::getnombre(){
		return nombre;
	}
	string Evidencias::gettipo_objeto(){
		return tipo_objeto;
	}
	string Evidencias::getlugar_encontrada(){
		return lugar_encontrado;
	}
	bool   Evidencias::gethuella(){
		return huella;
	}
	bool   Evidencias::getprocesada(){
			return procesada;
	}
	//tostrinh
	string Evidencias::toString()const{
		stringstream ss;
		ss<<nombre<<tipo_objeto<<lugar_encontrado<<huella<<procesada;
		return ss.str();
	}