#include<iostream>
#include<string>
#ifndef MEJORAS_CPP
#define MEJORAS_CPP

using namespace std;

class Mejoras{
	
	private:
		
		string nombre;
		int precio;
		
	protected:
		
	public:
		
		Mejoras(){
			nombre="";
			precio=0;
		}//Fin del constructor simple
		
		Mejoras(string nombre,int precio){
			this->nombre=nombre;
			this->precio=precio;
		}//Fin del constructor sobrecargado
		
		void setNombre(string nombre){
			this->nombre.assign(nombre);
		}//Set del nombre
		
		string getNombre(){
			return this->nombre;
		}//Get del nombre
		
		void setPrecio(int precio){
			this->precio=precio;
		}//Set del precio
		
		int getPrecio(){
			return this->precio;
		}//Get del precio
		
		virtual int produccion()=0;
		
		void print(){
			cout<<"Nombre de la mejora: "<<nombre<<endl;
			cout<<"Preico de la mejora: "<<precio<<endl;
		}//Metodo print
		
		~Mejoras(){
			
		}//Destructor
};

#endif
