#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
#include "Mejoras.cpp"
#include "Edificios.cpp"
#ifndef REPOSTERIA_CPP
#define REPOSTERIA_CPP

using namespace std;

class Reposteria{
	
	private:
		
		vector<Mejoras*>mejoras;
		vector<Edificios*>templos;
		
	protected:
		
	public:
		
		Reposteria(){
			
		}//Fin del constructor simple
             
        void setMejora(Mejoras*m){
            this->mejoras.push_back(m);
        }//Fin del metodo set de una sola mejora
             
        vector<Mejoras*> getMejoras(){
            return this->mejoras;
        }//Fin del metodo get del vector de las mejoras
        
        void setMejoras(vector<Mejoras*>mejoras){
            this->mejoras=mejoras;
        }//Set de las mejoras
        
        void setEdificio(Edificios*e){
            this->templos.push_back(e);
        }//Fin del metodo set de una solo edificio
             
        vector<Edificios*> getTemplos(){
            return this->templos;
        }//Fin del metodo get del vector de los edificios
        
        void setTemplos(vector<Edificios*>templos){
            this->templos=templos;
        }//Set de los templos
		
		void print(){
			
			cout<<"Mejoras del jugador"<<endl;
			for(int i=0;i<mejoras.size();i++){
				mejoras[i]->print();
			}//For de impresion de las mejoras
			cout<<"\n\n\n\n";
			cout<<"Templosd el jugador"<<endl;
			for(int i=0;i<templos.size();i++){
				templos[i]->print();
			}//For de impresion de los templos
			
		}//Metodo print
		
		~Reposteria(){
			
		}//Destructor
};

#endif
