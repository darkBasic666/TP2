#include "pixel.cpp"
#include <iostream>
#include <vector>
#include <cstdio>
#include <stdlib.h>
#include <fstream>
#include <iomanip>


using namespace std;

int main(){
	
	/*ofstream mapaO("mapa.txt");
	soyElMapa.imprimirMapa(mapaO);
	ifstream mapaI("mapa.txt");
	Mapa nuevoMapa;
	nuevoMapa.leerMapa(mapaI);*/
	
	Pixel p(1,2,3);
	ofstream pO("pixel.txt");
	p.guardar(pO);
	pO.close();
	ifstream pI("pixel.txt");
	p.cargar(pI);
	pI.close();
	p.guardar(cout);
	return 0;
}