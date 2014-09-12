#include "Evidencias.h"
#include "administrativo.h"
#include "Caso.h"
#include "Homicidio.h"
#include "investigador.h"
#include "persona.h"
#include "Secuestro.h"
#include "forense.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(int argc,char* argv[]){
	int seguir;
	vector<Evidencia*> ls_evidencias;
	vector<Persona*> ls_persona;
	vector<Caso*> ls_caso;
	do{
		int opcion;
		cout<<"1-Agregar"<<endl;
		cout<<"2-Modeificar"<<endl;
		cout<<"3-Eliminar"<<endl;
		cin>>opcion;
		if (opcion==1){
			int opcion2;
			cout<<"1-Gestion de personal:"<<endl;
			cout<<"2-Gestión de evidencias:"<<endl;
			cout<<"3-Gestión de casos:"<<endl;
			cin>>opcion2;
			//opcion nivel 2
			if(opcion2==1){
				//crear gestion  personal
				int opcion3;
				cout<<"1-Personal administrativo:"<<endl;
				cout<<"2-Investigador:"<<endl;
				cout<<"3-Forense:"<<endl;
				cin>>opcion3;
				//opcion nivel 3
				if(opcion3==1){
                   
				}else if(opcion3==2){

				}else if(opcion3==3){

				}else{
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else if(opcion2==2){
				//crear gestion de evidencia
				int opcion3;
				cout<<"1-objetos de evidencia"<<endl;
				cin>>opcion3;
				//opcion nivel 3
				if(opcion3==1){
						string nombre,lugar,objeto1;
						int huella,evidencia,tipo;
						bool verdadero;
						cout<<"Ingrese el nombre: "<<endl;
						getline(cin,nombre);
  						
						///////////////////////////////////
						cout<<"1-Arma de fuego "<<endl;
						cout<<"2.Arma blanca "<<endl;
						cout<<"3-Evidencia circunstancial: "<<endl;
						cout<<"Elija tipo de objeto: "<<endl;
						cin>>tipo;
						if(tipo==1){
                            objeto1="Arma de fuego";
						}else if(tipo==2){
							objeto1="Arma blanca";
						}else{
							objeto1="Evidencia circunstancial:";
						}
						cout<<"Ingrese lugar donde se encontro el objeto: "<<endl;
						getline(cin,lugar);
						do{
						cout<<"Habia huellas 1/S o 0/N"<<endl;
						cin>>huella;
						if(huella==1){
 								verdadero=true;
						}else if(huella==2){
								verdadero=false;
						}
					   }while(huella !=2  && huella != 1);
						cout<<"Fue procesada la evidencia 1/S 0/n "<<endl;
						cin>>evidencia;
						bool si;
						if(evidencia==1){
                             si=true;
						}else{
							si=false;
						}
						ls_evidencias.push_back(new Evidencia(nombre,objeto1,lugar,verdadero,si));


				}else{
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else if(opcion2==3){
				//crear Gestión de casos:
				int opcion3;
				cout<<"1-Homicidio:"<<endl;
				cout<<"2-Secuestro:"<<endl;
				cin>>opcion3;
				if(opcion3==1){

				}else if(opcion3==2){

				}else {
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else{
				cout<<"OPCION NO ENCONTRADA"<<endl;
			}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//modificar			
		}else if(opcion==2){
             ///::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
			////:::::::::::::::::::::::::::Modificar:::::::::::::::::::::::::::::
			int opcion2;
			cout<<"1-Gestion de personal:"<<endl;
			cout<<"2-Gestión de evidencias:"<<endl;
			cout<<"3-Gestión de casos:"<<endl;
			cin>>opcion2;
			if(opcion2==1){
		        	//Modificar personal
				int opcion3;
				cout<<"1-Personal administrativo:"<<endl;
				cout<<"2-Investigador:"<<endl;
				cout<<"3-Forense:"<<endl;
				cin>>opcion3;
						//opcion nivel 3
				if(opcion3==1){

				}else if(opcion3==2){

				}else if(opcion3==3){

				}else{
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else if(opcion2==2){
		        	//modificar Evidencias
				int opcion3;
				cout<<"1-objetos de evidencia"<<endl;
				cin>>opcion3;
					//opcion nivel 3
				if(opcion3==1){

				}else{
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else if(opcion2==3){
		        	//modificar  casos
				int opcion3;
				cout<<"1-Homicidio:"<<endl;
				cout<<"2-Secuestro:"<<endl;
				cin>>opcion3;
				if(opcion3==1){

				}else if(opcion3==2){

				}else {
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else{
				cout<<"OPCION NO ENCONTRADA"<<endl;
			}

		}else if(opcion==3){
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//eliminar	
			int opcion2;
			cout<<"1-Gestion de personal:"<<endl;
			cout<<"2-Gestión de evidencias:"<<endl;
			cout<<"3-Gestión de casos:"<<endl;
			cin>>opcion2;
			if(opcion2==1){
				int opcion3;
				cout<<"1-Personal administrativo:"<<endl;
				cout<<"2-Investigador:"<<endl;
				cout<<"3-Forense:"<<endl;
				cin>>opcion3;
				//opcion nivel 3
				if(opcion3==1){

				}else if(opcion3==2){

				}else if(opcion3==3){

				}else{
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else if(opcion2==2){
				int opcion3;
				cout<<"1-objetos de evidencia"<<endl;
				cin>>opcion3;
				//opcion nivel 3
				if(opcion3==1){

				}else{
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else if(opcion2==3){
				int opcion3;
				cout<<"1-Homicidio:"<<endl;
				cout<<"2-Secuestro:"<<endl;
				cin>>opcion3;
				if(opcion3==1){

				}else if(opcion3==2){

				}else {
					cout<<"OPCION NO ENCONTRADA"<<endl;
				}
			}else{
				cout<<"OPCION NO ENCONTRADA"<<endl;
			}
		}else{
			cout<<"OPCION NO ENCONTRADA"<<endl;
		}
		cout<<"Desea seguir SI=1 NO=0"<<endl;
		cin>>seguir;
    }while(seguir !=0);
}
