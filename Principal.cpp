#include<iostream>
#include <stdlib.h>
#include<windows.h>
#include "arely.h"
#include "Cafetera.cpp"
using namespace std;

int main(){
	int ts,ta,opc,opc1,opc2,opc3;
	char r1,r2,r3,r4;
	Cafetera hg("Oster","B071K9BB95","Negro"),hc,hf(3000);
	//Cafetera ;
	system("color 0E");
	do{
		system("cls");
	gotoxy(40,1);cout<<"Menu";
	gotoxy(31,2);cout<<"1.Usar cafetera vacia";
	gotoxy(31,3);cout<<"2.Usar cafetera nueva";
	gotoxy(31,4);cout<<"3.Usar cafetera llena";
	gotoxy(31,5);cout<<"";
	cin>>opc;
	switch(opc){
		
	case 1: do{
			system("cls");
			gotoxy(33,1);cout<<"Seleccione una opcion:";
			gotoxy(35,2);cout<<"1.Llenar cafetera.";
			gotoxy(35,3);cout<<"2.Servir taza.";
			gotoxy(35,4);cout<<"3.Agregar cafe.";
			gotoxy(35,5);cout<<"4.Mostrar cafetera.";
			gotoxy(35,6);cout<<"5.Vaciar cafetera.";
			gotoxy(35,7);cout<<"";
			cin>>opc1;
			switch(opc1){
				case 1: hg.llenarCafetera();
						break;
				case 2: 
				cout<<"\n¿Cuantas tazas desea?"<<endl;
				cin>>ts;
				ts=ts*250;
				hg.servirTaza(ts);
				break;
				case 3: 
				cout<<"Cuantas tazas de cafe desea agregar?"<<endl;
				cin>>ta;
				ta=ta*250;
				hg.agregarCafe(ta);
				break;
				case 4: 
				hg.mostrarCafetera();
				break;
				case 5: 
				hg.vaciarCafetera();
				break;
				default: 
				cout<<"No existe esa opcion";
			}
			cout<<"\n¿Desea realizar otra opcion?(S/N)";
			cin>>r2;
		
	}while(r2=='s'||r2=='S');
	break;
	
	case 2:	
			
			do{
				system("cls");
				gotoxy(33,1);cout<<"Seleccione una opcion:";
				gotoxy(35,2);cout<<"1.Llenar cafetera.";
				gotoxy(35,3);cout<<"2.Servir taza.";
				gotoxy(35,4);cout<<"3.Agregar cafe.";
				gotoxy(35,5);cout<<"4.Mostrar cafetera.";
				gotoxy(35,6);cout<<"5.Vaciar cafetera.";
				gotoxy(35,7);cout<<"";
				cin>>opc2;
				switch(opc2){
				case 1: hc.llenarCafetera();
						break;
				case 2: 
						cout<<"\n¿Cuantas tazas desea?"<<endl;
						cin>>ts;
						ts=ts*250;
						hc.servirTaza(ts);
						break;
				case 3: 
						cout<<"Cuantas tazas de cafe desea agregar?"<<endl;
						cin>>ta;
						ta=ta*250;
						hc.agregarCafe(ta);
						break;
				case 4: 
						hc.mostrarCafetera();
						break;
				case 5: 
						hc.vaciarCafetera();
						break;
				default: 
				cout<<"No existe esa opcion";
			}
			cout<<"\n¿Desea realizar otra opcion?(S/N)";
			cin>>r3;
			}while(r3=='S'||r3=='s');
			break;
	case 3: do{
			system("cls");
			gotoxy(33,1);cout<<"Seleccione una opcion:";
			gotoxy(35,2);cout<<"1.Llenar cafetera.";
			gotoxy(35,3);cout<<"2.Servir taza.";
			gotoxy(35,4);cout<<"3.Agregar cafe.";
			gotoxy(35,5);cout<<"4.Mostrar cafetera.";
			gotoxy(35,6);cout<<"5.Vaciar cafetera.";
			gotoxy(35,7);cout<<"";
			cin>>opc3;
			switch(opc3){
				case 1: hf.llenarCafetera();
						break;
				case 2: 
				cout<<"\n¿Cuantas tazas desea?"<<endl;
				cin>>ts;
				ts=ts*250;
				hf.servirTaza(ts);
				break;
				case 3: 
				cout<<"Cuantas tazas de cafe desea agregar?"<<endl;
				cin>>ta;
				ta=ta*250;
				hf.agregarCafe(ta);
				break;
				case 4: 
				hf.mostrarCafetera();
				break;
				case 5: 
				hf.vaciarCafetera();
				break;
				default: 
				cout<<"No existe esa opcion";
			}
			cout<<"\n¿Desea realizar otra opcion?(S/N)";
			cin>>r4;
		
	}while(r4=='s'||r4=='S');
	break;
		
	default: cout<<"No existe la opcion";
	}
	
		
	cout<<"\n¿Desea realizar otra opcion?(S/N)";
			cin>>r1;
}while(r1=='s'||r1=='S');
	
	
	
}
