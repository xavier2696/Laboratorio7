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
		cout<<"2-Modificar"<<endl;
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
					string nombre, usuario, password;
					int edad;
					string id,fecha, clave, puesto;
					cout << "Ingrese el nombre: ";
					cin >> nombre;
					cout << "Ingrese el usuario: ";
					cin >> usuario;
					cout << "Ingrese el password: ";
					cin >> password;
					cout << "Ingrese la edad: ";
					cin >> edad;
					cout << "Ingrese la id: ";
					cin >> id;
					cout << "Ingrese la fecha: ";
					cin>> fecha;
					cout << "Ingrese la clave: ";
					cin >> clave;
					cout << "Ingrese el puesto: ";
					cin >> puesto;
					Administrativo* temp = new Administrativo(nombre,usuario,password,edad,id,fecha,clave,puesto);
					ls_persona.push_back(temp);
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
	for (int i = 0;i <ls_persona.size();i++)
		delete ls_persona[i];
	for (int i = 0; i<ls_evidencias.size(); i++)
		delete ls_evidencias[i];
	for (int i = 0; i<ls_caso.size();i++)
		delete ls_caso[i];
	return 0;
}
