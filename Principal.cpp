#include<typeinfo>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
#include "Jugador.cpp"
#include "Reposteria.cpp"
#include "Granja.cpp";
#include "Banco.cpp";
#include "Templo.cpp";
#include "Oreo.cpp";
#include "Migajas.cpp";

using namespace std;

	int main(){
		//Variables de control del jugador
		Jugador* j;
		string nombre;
		int galletas;
		
		//Variable de instancia de reposteria
		Reposteria *repo=new Reposteria();
		Granja *g;
		Banco *b;
		Templo *t;
		Oreo *o;
		Migajas *m; 
		int op;
		int r=1;
		cout<<"Ingrese nombre del jugador: ";
		cin>>nombre;
		j=new Jugador(nombre,0,repo);
			
		while(r==1){
			cout<<"Reposteria de "<<nombre<<" ,tiene "<<j->getGalletas()<<" galletas";
			cout<<"\n\n\n\n";
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
				
				case 1:
					j->setGalletas(j->getGalletas()+1);
				break;
				
				case 2:
					
					if(j->getGalletas()>=50){
						g=new Granja();
						j->getReposteria()->setEdificio(g);
						if(g->getPro()==10){
								j->setGalletas(j->getGalletas()+g->Especial());
						}else {
							j->setGalletas(j->getGalletas()+1);
						}//If que valida si tiene lo suficciente para aplicar el bono
						cout<<"Precio para comprar la siguiente granja "<<g->Aumento();
					}else{
						cout<<"No tiene las galletas suficientes para comprar una granja";
					}//If que valida si tiene las suficientes galletas para comprar una granja
					cout<<"\n\n\n\n";
				break;
				
				case 3:
					
					if(j->getGalletas()>=100){
						b=new Banco();
						j->getReposteria()->setEdificio(b);
					}else {
						cout<<"No tiene las galletas suficientes para compar un Banco";
					}//If que valida si tiene las suficientes galletas para comprar un banco
					cout<<"\n\n\n\n";
					
				break;
				
				case 4:
					
					if(j->getGalletas()>=200){
						t=new Templo();
						j->getReposteria()->setEdificio(t);
					}else{
						cout<<"No tiene las suficientes galletas para comprar un Templo";
					}//If que valida si tiene las suficientes galletas para comprar un templo
					cout<<"\n\n\n\n";
					
				break;
				
				case 5:
					
				break;
				
				case 6:
					
				break;
				
				case 7:
					j->getReposteria()->print();
				break;
				
				case 8:
					j->~Jugador();
					j=NULL;
				break;
				
				default: 
					cout<<"Opcion no valida\n\n\n\n";
				break;
				
			}//Fin del switch de las opciones
			cout<<"Volver al menu?1.-Si,2.-No: ";
			cin>>r;
			cout<<"\n\n\n\n";	
		}//Fin del while del menu
		j->~Jugador();
		j=NULL;
		system("pause");
		return 0;
	}//Fin del main
