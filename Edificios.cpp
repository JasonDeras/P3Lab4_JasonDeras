#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>

#ifndef EDIFICIOS_CPP
#define EDIFICIOS_CPP

using namespace std;

class Edificios{
	
	private:
		
		string nombre;
		int precio_base;
		int produccion_base;
		int aumento;
		
	protected:
		
	public:
		
		Edificios(){
			nombre="";
			precio_base=0;
			produccion_base=0;
			aumento=0;
		}//Fin del constructor simple
		
		Edificios(string nombre,int precio_base,int produccion_base,int aumeto){
			this->nombre=nombre;
			this->precio_base=precio_base;
			this->produccion_base=produccion_base;
			this->aumento=aumento;
		}//Fin del constructor sobrecargado
		
		void setNombre(string nombre){
			this->nombre.assign(nombre);
		}//Set del nombre
		
		string getNombre(){
			return this->nombre;
		}//Get del nombre
		
		void setPrecio_base(int precio_base){
			this->precio_base=precio_base;
		}//Set del precio base
		
		int getPrecio_Base(){
			return this->precio_base;
		}//Get del precio base
		
		void setProduccion_base(int producion_base){
			this->produccion_base=produccion_base;
		}//Set del produccion de base
		
		int getProduccion_base(){
			return this->produccion_base;
		}//Get de la produccion base
		
		void setAumento(int aumento){
			this->aumento=aumento;
		}//Set del aumento
		
		int getAumento(){
			return this->aumento;
		}//Get del aumento
		
		void print(){
			cout<<"Nombre del templo: "<<nombre<<endl;
			cout<<"Precio base: "<<precio_base<<endl;
			cout<<"Produccion base: "<<produccion_base<<endl;
			cout<<"Aumento: "<<aumento<<endl;
		}//Metodo print
		
		~Edificios(){
			
		}//Destructor
};

#endif
