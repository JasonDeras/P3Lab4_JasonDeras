#include<iostream>
#include "Edificios.cpp"
#ifndef BANCO_CPP
#define BANCO_CPP

using namespace std;

class Banco:public Edificios{
	
	private:
		
		int base;
		int pro_base;
		
	protected:
		
	public:
		
		Banco():Edificios("Banco",100,15){
			base=100;
			pro_base=15;
		}//Fin del constructor simple
		
		int Aumento(){
			base=base+40;
		}//Metodo polimorfo de aumento
		
		int Especial(){
			return pro_base++;
		}//Metodo especial
		
		~Banco(){
			
		}//Destructor
};

#endif
