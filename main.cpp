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
		cout<<"4-reporte"<<endl;
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
		       	int posicion;
				cout<<":::::::::::Modificar Evidencias:::::::::::"<<endl;
				for (int i = 0; i < ls_evidencias.size(); i++){
					cout<<i<<" - "<<ls_evidencias[i]->toString()<<endl;
				}
				cout<<"Elija la posicion a Modificar"<<endl;
				cin>>posicion;

					string nombre,lugar,objeto1;
					int huella,evidencia,tipo;
					bool verdadero;
					cout<<"Ingrese el nombre: "<<endl;
					getline(cin,nombre);
                    ls_evidencias[posicion]->setnombre(nombre);
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
					ls_evidencias[posicion]->settipo_objeto(objeto1);
					cout<<"Ingrese lugar donde se encontro el objeto: "<<endl;
					getline(cin,lugar);
					ls_evidencias[posicion]->setlugar_encontrado(lugar);
						cout<<"Habia huellas 1/S o 0/N"<<endl;
						cin>>huella;
						if(huella==1){
							verdadero=true;
						}else if(huella==2){
							verdadero=false;
						}
					ls_evidencias[posicion]->sethuella(verdadero);
					cout<<"Fue procesada la evidencia 1/S 0/n "<<endl;
					cin>>evidencia;
					bool si;
					if(evidencia==1){
						si=true;
					}else{
						si=false;
					}
					ls_evidencias[posicion]->setprocesada(si);

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
				int posicion;
				cout<<":::::::::::Eliminar personal administrativo:::::::::::"<<endl;
				for (int i = 0; i < ls_persona.size(); i++){
					cout<<i<<" - "<<ls_persona[i]->toString()<<endl;
				}
				cout<<"Elija la posicion a eliminar"<<endl;
				cin>>posicion;
				ls_persona.erase (ls_persona.begin()+posicion);
				cout<<":::::::::::Eliminado con exito:::::::::::"<<endl;
				
			}else if(opcion2==2){
				int posicion;
				cout<<":::::::::::Eliminar Evidencias:::::::::::"<<endl;
				for (int i = 0; i < ls_evidencias.size(); i++){
					cout<<i<<" - "<<ls_evidencias[i]->toString()<<endl;
				}
				cout<<"Elija la posicion a eliminar"<<endl;
				cin>>posicion;
				ls_evidencias.erase (ls_evidencias.begin()+posicion);
				cout<<":::::::::::Eliminado con exito:::::::::::"<<endl;
			}else if(opcion2==3){
				int posicion;
				cout<<":::::::::::Eliminar Casos:::::::::::"<<endl;
				for (int i = 0; i < ls_caso.size(); i++){
					cout<<i<<" - "<<ls_caso[i]->toString()<<endl;
				}
				cout<<"Elija la posicion a eliminar"<<endl;
				cin>>posicion;
			    for(int i =0; i< ls_caso[posicion]->getEvidencias().size(); i++){
			    	delete ls_caso[posicion]->getEvidencias()[i];
			    }
			    ls_caso.erase (ls_caso.begin()+posicion);
			    cout<<":::::::::::Eliminado con exito:::::::::::"<<endl;
			}else{
				cout<<"OPCION NO ENCONTRADA"<<endl;
			}
		}else if(opcion==4){
				cout<<"1-Reporte de personal:"<<endl;
			    cout<<"2-Reporte de evidencias:"<<endl;
			     cout<<"3-Reporte de casos:"<<endl;
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
