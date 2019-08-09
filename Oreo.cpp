#include<iostream>
#include "Mejoras.cpp"
#include "Jugador.cpp"
#ifndef	OREO_CPP
#define OREO_CPP

using namespace std;

class Oreo:public Mejoras{
	
	private:
		
		Jugador *j;
	
	protected:
		
	public:
		
		Oreo():Mejoras("Oreo",100){
		}//Fin del constructor simple
		
		int produccion(){
			
			int galletas=j->getGalletas();
			int pro=0;
			
			for(int i=0;i<j->getReposteria()->getTemplos().size();i++){
				pro+=((Edificios*)j->getReposteria()->getTemplos()[i])->getProduccion_base();
			}//Fin de la produccion de las mejoras
		return (galletas+pro)*(galletas+pro);
		}//Aumento de la produccion
		
		~Oreo(){
			
		}//Destructor
};

#endif
