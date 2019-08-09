#include<iostream>
#include<string>
#include "Reposteria.cpp"
#ifndef JUGADOR_CPP
#define JUGADOR_CPP

using namespace std;

class Jugador{
	
	private:
		
		string nombre;
		int galletas;
		Reposteria *repo;
		
	protected:
		
	public:
		
		Jugador(){
			nombre="";
			galletas=0;
			repo=new Reposteria();
		}//Fin del constructor simple
		
		Jugador(string nombre, int galletas, Reposteria*repo){
			this->nombre=nombre;
			this->galletas=galletas;
			this->repo=repo;
		}//Constructor sobrecargado
		
		void setNombre(string nombre){
			this->nombre.assign(nombre);
		}//Set del nombre
		
		string getNombre(){
			return this->nombre;
		}//Get del nombre
		
		void setGalletas(int galletas){
			this->galletas=galletas;
		}//Set del numero de galletas
		int getGalletas(){
			return this->galletas;
		}//Get del numero de galletas
		
		void setReposteria(Reposteria *repo){
			this->repo=repo;
		}//Set de la reposteria
		
		Reposteria* getReposteria(){
			return this->repo;
		}//Get de la reposteria
		
		void print(){
			cout<<"Nombre del jugador: "<<nombre<<endl;
			cout<<"Numero de galletas: "<<galletas<<endl;
			repo->print();
		}//Metodo print
		
		~Jugador(){
			
		}//Destructor
};

#endif
