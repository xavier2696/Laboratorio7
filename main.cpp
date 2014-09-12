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
					string nombre, usuario, password;
					int edad;
					string id, fecha;
					int numerocasos,cerrados,sinresolver;
					cout <<"Ingrese el nombre ";
					cin >> nombre;
					cout <<"Ingrese usuario: ";
					cin >> usuario;
					cout << "Ingrese el password ";
					cin >> password;
					cout << "Ingrese la edad: ";
					cin >> edad;
					cout << "Ingrese la id: ";
					cin >> id;
					cout << "Ingrese la fecha: ";
					cin >> fecha;
					cout << "Ingrese el numero casos: ";
					cin >> numerocasos;
					cout << "Ingrese el numero de casos cerrados: ";
					cin >> cerrados;
					cout << "Ingrese el numero de casos sin resolver: ";
					cin >> sinresolver;
					Investigador* temp = new Investigador(nombre,usuario,password,edad,id,fecha,numerocasos,cerrados,sinresolver);
					ls_persona.push_back(temp);
				}else if(opcion3==3){
					string nombre, usuario, password;
					int edad;
					string id, fecha,ingreso,horario;
					cout << "Ingrese el nombre: ";
					cin >> nombre;
					cout << "Ingrese el usuario: ";
					cin >> usuario;
					cout << "Ingrese el password: ";
					cin >> password;
					cout << "Ingrese el edad";
					cin >> edad;
					cout << "Ingrese la id: ";
					cin >> id;
					cout << "Ingrese la fecha: ";
					cin >> fecha;
					cout<< "Ingrese el ingreso: ";
					cin >> ingreso;
					cout << "Ingrese el horario: ";
					cin >> horario;
					Forense* temp = new Forense(nombre,usuario,password,edad,id,fecha,ingreso,horario);
					ls_persona.push_back(temp);
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
					int numero;
					vector<Evidencia*> evidencias;
					string fecha, hora;
					bool cerrado;
					vector<string> nombres;
					string sospechoso, victima;
					cout << "Ingrese el numero del caso: ";
					cin >> numero;
					cout << "Evidencias "<<endl;
					for (int i = 0; i<ls_evidencias.size(); i++){
						cout <<"["<< ls_evidencias[i]->getnombre()<<"]";
					}
					int posicion;
					do{
						cout << "Ingrese la posicion de la evidencia que desea agregar(Ingrese -1 para dejar de agregar):";
						cin >> posicion;
						if(posicion>=0 && posicion<ls_evidencias.size()){
							Evidencia* e = new Evidencia(evidencias[posicion]->getnombre(),evidencias[posicion]->gettipo_objeto(),evidencias[posicion]->getlugar_encontrada(),evidencias[posicion]->gethuella(),evidencias[posicion]->getprocesada());
							evidencias.push_back(e);						
						}
					}while(posicion>=0);
					cout << "Ingrese la fecha: ";
					cin >> fecha;
					cout << "Ingrese la hora: ";
					cin >> hora;
					char respuesta;
					cout << "Ingrese s si esta cerrado el caso: ";
					cin >> respuesta;
					if(respuesta == 's')
						cerrado = true;
					else
						cerrado = false;
					string nombretemp;
					do{
						cout << "Ingrese los nombres sospechosos(0 para dejar de ingresar): ";
						cin >> nombretemp;
						if (nombretemp != "0")
							nombres.push_back(nombretemp);
					}while(nombretemp != "0");
					cout <<"Ingrese el sospechoso principal: ";
					cin >> sospechoso;
					cout << "Ingrese la victima: ";
					cin >> victima;
					Homicidio* temp = new Homicidio(numero, evidencias,fecha, hora, cerrado, nombres, sospechoso, victima); 
					ls_caso.push_back(temp);
				}else if(opcion3==2){
					int numero;
					vector<Evidencia*> evidencias;
					string fecha, hora;
					bool cerrado;
					string victima, motivo, lugar;
					bool rescate;
					int cantidad;
					bool vivo;
					cout << "Ingrese el numero del caso: ";
					cin >> numero;
					cout << "Evidencias "<<endl;
					for (int i = 0; i<ls_evidencias.size(); i++){
						cout <<"["<< ls_evidencias[i]->getnombre()<<"]";
					}
					int posicion;
					do{
						cout << "Ingrese la posicion de la evidencia que desea agregar(Ingrese -1 para dejar de agregar):";
						cin >> posicion;
						if(posicion>=0 && posicion<ls_evidencias.size()){
							Evidencia* e = new Evidencia(evidencias[posicion]->getnombre(),evidencias[posicion]->gettipo_objeto(),evidencias[posicion]->getlugar_encontrada(),evidencias[posicion]->gethuella(),evidencias[posicion]->getprocesada());
							evidencias.push_back(e);						
						}
					}while(posicion>=0);
					cout << "Ingrese la fecha: ";
					cin >> fecha;
					cout << "Ingrese la hora: ";
					cin >> hora;
					char respuesta;
					cout << "Ingrese s si esta cerrado el caso: ";
					cin >> respuesta;
					if(respuesta == 's')
						cerrado = true;
					else
						cerrado = false;
					cout << "Ingrese la victima: ";
					cin >> victima;
					cout << "Ingrese el motivo: ";
					cin >> motivo;
					cout << "Ingrese el lugar: ";
					cin >> lugar;
					cout << "Ingrese s si pide rescate: ";
					cin >> respuesta;
					if(respuesta = 's')
						rescate = true;
					else
						rescate = false;
					if(rescate){
						cout << "Ingrese la cantidad de dinero que solicitan: ";
						cin >> rescate;
					}else
						rescate = 0;
					cout <<"Ingrese s si esta vivo: ";
					cin >> respuesta;
					if(respuesta ='s')
						vivo = true;
					else
						vivo = false;
					Secuestro* temp = new Secuestro(numero,evidencias,fecha,hora, cerrado, victima, motivo, lugar, rescate, cantidad, vivo);
					ls_caso.push_back(temp);
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
