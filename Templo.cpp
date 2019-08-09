#include<iostream>
#include "Edificios.cpp"
#ifndef TEMPLO_CPP
#define TEMPLO_CPP

using namespace std;

class Templo:public Edificios{
	
	private:
		
		int base;
		int pro_base;
		
	protected:
		
	public:
		
		Templo():Edificios("Templo",200,30){
			base=200;
			pro_base=15;
		}//Fin del constructor simple
		
		void Aumento(){
			base=base+100;
		}//Metodo polimorfo de aumento
		
		void Especial(){
			pro_base+=3;
		}//Metodo especial
		
		~Templo(){
			
		}//Destructor
};

#endif
