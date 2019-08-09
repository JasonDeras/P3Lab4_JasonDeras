#include<iostream>
#include "Mejoras.cpp"
#include "Jugador.cpp"
#ifndef MIGAJAS_CPP
#define MIGAJAS_CPP

using namespace std;

class Migajas:public Mejoras{
	
	private:
		
		Jugador *j;
	
	protected:
		
	public:
		
		Migajas():Mejoras("Migajas",1000){
		}//Fin del constructor simple
		
		int produccion(){
			
			int galletas=j->getGalletas();
			int pro=0;
			
			for(int i=0;i<j->getReposteria()->getTemplos().size();i++){
				pro+=((Edificios*)j->getReposteria()->getTemplos()[i])->getProduccion_base();
			}//Fin de la produccion de las mejoras
		return (galletas+pro)*(galletas+pro)*(galletas+pro);
		}//Aumento de la produccion
		
		~Migajas(){
			
		}//Destructor
};

#endif
