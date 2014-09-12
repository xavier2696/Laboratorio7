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
#include <typeinfo>
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
					int posicion;
					for(int i=0;i<ls_persona.size(); i++){
						if(typeid(*ls_persona[i]).name()==typeid(Administrativo).name())
							cout<<ls_persona[i]->toString()<<endl;
					}
					cout<<"Seleccione la posicion a modificar"<<endl;
					cin>>posicion;
					int eleccion;
					cout<<"1.Nombre\n2.Usuario\n3.Password\n4.Edad\n5.Id\n6.Fecha\n7.Clave\n8.Puesto"<<endl;
					cin>>eleccion;
					if(eleccion==1){
						cout<<"Ingrese Nombre"<<endl;
						string nombre;
						cin>>nombre;
						ls_persona[posicion]->setNombre(nombre);
					}
					if(eleccion==2){
						cout<<"Ingrese Usuario"<<endl;
						string usuario;
						cin>>usuario;
						ls_persona[posicion]->setUsuario(usuario);
					}
					if(eleccion==3){
						cout<<"Ingrese Password"<<endl;
						string password;
						cin>>password;
						ls_persona[posicion]->setPassword(password);
					}
					if(eleccion==4){
						cout<<"Ingrese Edad"<<endl;
						int edad;
						cin>>edad;
						ls_persona[posicion]->setEdad(edad);
					}
					if(eleccion==5){
						cout<<"Ingrese Id"<<endl;
						string id;
						cin>>id;
						ls_persona[posicion]->setId(id);
					}
					if(eleccion==6){
						cout<<"Ingrese Fecha"<<endl;
						string fecha;
						cin>>fecha;
						ls_persona[posicion]->setFecha(fecha);
					}
					if(typeid(*ls_persona[posicion]).name()==typeid(Administrativo).name()){
						if(eleccion==7){
							cout<<"Ingrese Clave"<<endl;
							string clave;
							cin>> clave;
							dynamic_cast<Administrativo*>(ls_persona[posicion])->setClave(clave);
						}
					if(eleccion==7){
						cout<<"Ingrese Puesto"<<endl;
						string puesto;
						cin>> puesto;
						dynamic_cast<Administrativo*>(ls_persona[posicion])->setPuesto(puesto);

					}
				}

				}else if(opcion3==2){
                                        int posicion;
					for(int i=0;i<ls_persona.size(); i++){
						if(typeid(*ls_persona[i]).name()==typeid(Investigador).name())
							cout<<ls_persona[i]->toString()<<endl;
					}
					cout<<"Seleccione la posicion a modificar"<<endl;
					cin>>posicion;
					int eleccion;

					cout<<"1.Nombre\n2.Usuario\n3.Password\n4.Edad\n5.Id\n6.Fecha\n7.Numero de Casos\n8.Casos"<<"Cerrados\n9.Casos sin Resol					ver"<<endl;
					cin>>eleccion;
					if(eleccion==1){
						cout<<"Ingrese Nombre"<<endl;
						string nombre;
						cin>>nombre;
						ls_persona[posicion]->setNombre(nombre);
					}
					if(eleccion==2){
						cout<<"Ingrese Usuario"<<endl;
						string usuario;
						cin>>usuario;
						ls_persona[posicion]->setUsuario(usuario);
					}
					if(eleccion==3){
						cout<<"Ingrese Password"<<endl;
						string password;
						cin>>password;
						ls_persona[posicion]->setPassword(password);
					}
					if(eleccion==4){
						cout<<"Ingrese Edad"<<endl;
						int edad;
						cin>>edad;
						ls_persona[posicion]->setEdad(edad);
					}
					if(eleccion==5){
						cout<<"Ingrese Id"<<endl;
						string id;
						cin>>id;
						ls_persona[posicion]->setId(id);
					}
					if(eleccion==6){
						cout<<"Ingrese Fecha"<<endl;
						string fecha;
						cin>>fecha;
						ls_persona[posicion]->setFecha(fecha);
					}
					if(typeid(*ls_persona[posicion]).name()==typeid(Investigador).name()){
						if(eleccion==7){
							cout<<"Ingrese numero de casos"<<endl;
							int numerocasos;
							cin>>numerocasos;
							dynamic_cast<Investigador*>(ls_persona[posicion])->setNumerocasos(numerocasos);
							
						}
					     	if(eleccion==8){
							cout<<"Ingrese casos cerrados"<<endl;
							int cerrados;
							cin>>cerrados;
							dynamic_cast<Investigador*>(ls_persona[posicion])->setCerrados(cerrados);
							
						}
						if(eleccion==9){
							cout<<"Ingrese casos sin resolver"<<endl;
							int sinresolver;
							cin>>sinresolver;
							dynamic_cast<Investigador*>(ls_persona[posicion])->setSinResolver(sinresolver);
							
						}
					}		

				}else if(opcion3==3){
					int posicion;
					for(int i=0;i<ls_persona.size(); i++){
						if(typeid(*ls_persona[i]).name()==typeid(Forense).name())
							cout<<ls_persona[i]->toString()<<endl;
					}
					cout<<"Seleccione la posicion a modificar"<<endl;
					cin>>posicion;
					int eleccion;
					//ingreso(ingreso),horario(horario)
					cout<<"1.Nombre\n2.Usuario\n3.Password\n4.Edad\n5.Id\n6.Fecha\n7.Ingreso\n8.Horario"<<endl;
					cin>>eleccion;
					if(eleccion==1){
						cout<<"Ingrese Nombre"<<endl;
						string nombre;
						cin>>nombre;
						ls_persona[posicion]->setNombre(nombre);
					}
					if(eleccion==2){
						cout<<"Ingrese Usuario"<<endl;
						string usuario;
						cin>>usuario;
						ls_persona[posicion]->setUsuario(usuario);
					}
					if(eleccion==3){
						cout<<"Ingrese Password"<<endl;
						string password;
						cin>>password;
						ls_persona[posicion]->setPassword(password);
					}
					if(eleccion==4){
						cout<<"Ingrese Edad"<<endl;
						int edad;
						cin>>edad;
						ls_persona[posicion]->setEdad(edad);
					}
					if(eleccion==5){
						cout<<"Ingrese Id"<<endl;
						string id;
						cin>>id;
						ls_persona[posicion]->setId(id);
					}
					if(eleccion==6){
						cout<<"Ingrese Fecha"<<endl;
						string fecha;
						cin>>fecha;
						ls_persona[posicion]->setFecha(fecha);
					}

					if(typeid(*ls_persona[posicion]).name()==typeid(Forense).name()){
						if(eleccion==7){
							cout<<"Ingrese el ingreso"<<endl;
							string ingreso;
							cin>>ingreso;	
							dynamic_cast<Forense*>(ls_persona[posicion])->setIngreso(ingreso);
						}
						if(eleccion==8){
							cout<<"Ingrese el horario"<<endl;
							string horario;
							cin>>horario;
							dynamic_cast<Forense*>(ls_persona[posicion])->setHorario(horario);
						}

					}

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
