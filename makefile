exe: main.o persona.o administrativo.o forense.o investigador.o Evidencia.o Caso.o Homicidio.o Secuestro.o
	g++ main.o persona.o administrativo.o forense.o investigador.o Evidencia.o Caso.o Homicidio.o Secuestro.o -o exe
main.o: main.cpp
	g++ -c main.cpp
persona.o: persona.cpp
	g++ -c persona.cpp
administrativo.o: administrativo.cpp
	g++ -c administrativo.cpp
forense.o: forense.cpp
	g++ -c forense.cpp
investigador.o: investigador.cpp
	g++ -c investigador.cpp
Evidencia.o: Evidencia.cpp
	g++ -c Evidencia.cpp
Caso.o: Caso.cpp
	g++ -c Caso.cpp
Homicidio.o: Homicidio.cpp
	g++ -c Homicidio.cpp
Secuestro.o: Secuestro.cpp
	g++ -c Secuestro.cpp
