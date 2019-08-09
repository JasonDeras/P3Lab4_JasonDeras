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
		int pro;
		
	protected:
		
	public:
		
		Granja():Edificios("Granja",50,5){
			base=50;
			pro=5;
		}//Fin del constructor simple
		
		int Aumento(){
			return base=base+15;
		}//Metodo polimorfo de aumento
		void setPro(int pro){
			this->pro=pro;
		}//Set de la produccion base
		
		int getPro(){
			return this->pro;
		}//Get de la produccion base
		
		int Especial(){
			if(pro==10){
				j->setGalletas(j->getGalletas()+20);
				return j->getGalletas();
				this->setPro(5);
			}else {
				pro++;
				return j->getGalletas();
			}
		}//Metodo especial
		
		~Granja(){
			
		}//Destructor
};

#endif
