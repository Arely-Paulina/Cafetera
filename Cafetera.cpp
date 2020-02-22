#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include "CafeteraH.h"

using namespace std;

Cafetera::Cafetera(){
			system("color 0B");
			gotoxy(29,1);
			cout<<"Ingresa una nueva cafetera: ";
			gotoxy(32,2);
			cout<<"Marca: ";
			cin>>Marca;
			gotoxy(32,3);cout<<"Modelo: ";
			cin>>Modelo;
			gotoxy(32,4);cout<<"Color: ";
			cin>>Color;
			gotoxy(32,5);cout<<"Capacidad maxima: ";
			cin>>CapacidadMaxima;
			gotoxy(32,6);cout<<"Capacidad actual: ";
			cin>>CapacidadActual;
			if(CapacidadMaxima<CapacidadActual){
			gotoxy(15,7);cout<<"Es imposible que la capacidad actual sea mayor a la maxima";
			CapacidadActual=CapacidadMaxima;
			Sleep(1000);
			}
}


Cafetera::Cafetera(string Mar, string Mod, string Col){
	
	Marca=Mar;
	Modelo=Mod;
	Color=Col;
	CapacidadMaxima=1000;
	CapacidadActual=0;
}

Cafetera::Cafetera(int CT){
	Marca="Oster";
	Modelo="BVSTDCW12B-013";
	Color="Rojo";
	CapacidadActual=CT;
	CapacidadMaxima=CapacidadActual;
	
} 
Cafetera::~Cafetera(){
	cout<<"\nSe libera la memoria del objeto\n";
}


void Cafetera::setter_Marca(string mar){
	Marca=mar;
	
}

string Cafetera::getter_Marca(){
	return Marca;
}

void Cafetera::setter_Modelo(string mod){
	Modelo=mod;
}

string Cafetera::getter_Modelo(){
	return Modelo;
}

void Cafetera::setter_Color(string col){
	Color=col;
}

string Cafetera::getter_Color(){
	return Color;
}

void Cafetera::setter_CapacidadMaxima(int CM){
	CapacidadMaxima=CM;
}

int Cafetera::getter_CapacidadMaxima(){
	return CapacidadMaxima;
}

void Cafetera::setter_CapacidadActual(int CA){
	CapacidadActual=CA;
}

int Cafetera::getter_CapacidadActual(){
	return CapacidadActual;
} 

double Cafetera::llenarCafetera(){
	//La cantidad actual, es llenada a su capacidadMaxima
	CapacidadActual=CapacidadMaxima;
	cout<<"La cafetera esta a su maxima capacidad: "<<endl;
	cout<<CapacidadActual<< " ml";
	return CapacidadActual;
}

void Cafetera::servirTaza(int taza){
	
	if(taza>CapacidadActual){
		vaciarCafetera();
	}
	else
	CapacidadActual=CapacidadActual-taza;
	cout<<"\nLa capacidad actual es de: ";
	cout<<CapacidadActual<<" ml";
} 

double Cafetera::vaciarCafetera(){
	CapacidadActual=0;
	cout<<"\nLa cafetera esta vacia";
	return CapacidadActual;
}

double Cafetera::agregarCafe(int relleno){
	CapacidadActual=CapacidadActual+relleno;
	if(CapacidadMaxima<CapacidadActual){
	cout<<"Error, capacidad superada";
	CapacidadActual=CapacidadActual-relleno;
	} 
	return CapacidadActual;
	
}

void Cafetera::mostrarCafetera(){
	cout<<"\nMarca: "<<Marca;
	cout<<"\nModelo: "<<Modelo;
	cout<<"\nColor: "<<Color;
//	if(CapacidadActual<=CapacidadMaxima){
	cout<<"\nLa capacidad maxima es de: "<<CapacidadMaxima<<" ml";
	cout<<"\nLa capacidad actual es de: ";
	cout<<CapacidadActual<<" ml\n";
	//}else
	//cout<<"\nError, capacidad superada";
	
}

