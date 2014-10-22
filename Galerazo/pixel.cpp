#include "pixel.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>     
#include <stdlib.h> 
#include <sstream>

using namespace std;

Pixel::Pixel(){
	for (int i = 0; i < 3; ++i){
	intensidades[i] = 0;
	}
}
Pixel::Pixel(int red,int green,int blue){
	intensidades[0] = red;
	intensidades[1] = green;
	intensidades[2] = blue;
}
void Pixel::cambiarPixel(int red, int green, int blue){
	intensidades[0] = red;
	intensidades[1] = green;
	intensidades[2] = blue;
}
int Pixel::red()const{
	return intensidades[0];
}
int Pixel::green()const{
	return intensidades[1];
}
int Pixel::blue()const{
	return intensidades[2];
}

void Pixel::guardar(ostream& os) const{
	os << "(";
	int i = 0;
	for (; i < 2; ++i){
		os << intensidades[i]<<";";
	}
	os << intensidades[i] << ")";

}

void Pixel::cargar (istream& is){
	string str;
	getline(is,str,';');
	intensidades[i] = atoi(str.substr(1,str.size()).c_str());
	for (int i =1 ; i < 3; ++i){
		getline(is,str,';');
		cout << str.substr(0,str.size())<<endl;
		intensidades[i] = atoi(str.substr(0,str.size()).c_str());
	}
	

	
}