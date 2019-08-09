#include<typeinfo>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
#include "Jugador.cpp"

using namespace std;

	int main(){
		
		int op;
		int r=1;
		
		while(){
			cout<<"Menu\n\n\n\n";
			cout<<"1. Hacer clic\n\n";
			cout<<"2. Comprar Granja\n\n";
			cout<<"3. Comprar Banco\n\n";
			cout<<"4. Comprar Templo\n\n";
			cout<<"5. Comprar Oreo\n\n";
			cout<<"6. Comprar Migajas\n\n";
			cout<<"7. Mostrar edificios y mejoras\n\n";
			cout<<"8. Salir\n\n";
			cout<<"Ingrese una opcion: ";
			cin>>op;
			cout<<"\n\n\n\n";
			switch(op){
				
				default: 
					cout<<"Opcion no valida\n\n\n\n";
				break;
				
			}//Fin del switch de las opciones
			cout<<"Volver al menu?1.-Si,2.-No: ";
			cin>>r;
			cout<<"\n\n\n\n";	
		}//Fin del while del menu
		system("pause");
		return 0;
	}//Fin del main
