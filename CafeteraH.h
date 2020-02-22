#include<iostream>
#include<string.h>
#ifndef CafeteraH
#define CafeteraH
using namespace std;
class Cafetera{
	string Marca;
	
	string Modelo;
	string Color;
	int CapacidadMaxima;
	int CapacidadActual;
	
	public:
		Cafetera(string,string,string);
		Cafetera(int);
		Cafetera();
		~Cafetera();
		string getter_Marca();
		string getter_Modelo();
		string getter_Color();
		int getter_CapacidadMaxima();
		int getter_CapacidadActual();
		void setter_Marca(string);
		void setter_Modelo(string);
		void setter_Color(string);
		void setter_CapacidadMaxima(int);
		void setter_CapacidadActual(int);
		double llenarCafetera();
		void servirTaza(int);
		void mostrarCafetera();
		double vaciarCafetera();
		double agregarCafe(int);
};
#endif
