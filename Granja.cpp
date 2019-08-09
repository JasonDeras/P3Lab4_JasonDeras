#include<iostream>
#include "Edificios.cpp"
#include "Jugador.cpp"
#ifndef GRANJA_CPP
#define GRANJA_CPP

using namespace std;

class Granja:public Edificios{
	
	private:
		
		int base;
		Jugador* j;
		
	protected:
		
	public:
		
		Granja():Edificios("Granja",50,5){
			base=50;
		}//Fin del constructor simple
		
		void Aumento(){
			base=base+15;
		}//Metodo polimorfo de aumento
		
		void Especial(){
			j->setGalletas(j->getGalletas()+20);
		}//Metodo especial
		
		~Granja(){
			
		}//Destructor
};

#endif
