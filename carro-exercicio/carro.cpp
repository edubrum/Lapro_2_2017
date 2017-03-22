#include"carro.h"
#include<iostream>
using namespace std;
	Carro::Carro(){
		litro=distancia=0.00;
	}
	void Carro::set_litro(float _litro){
		litro=_litro;
	}
	void Carro::set_distancia(float _distancia){
		distancia=_distancia;
	}
	float Carro::get_litro(){
		return litro;
	}
	float Carro::get_distancia(){
		return distancia;
	}
	float Carro::combustivel_restante(){
		float litros_restantes;
		litros_restantes=litro-(distancia/15.00);
		if(litros_restantes==0.00){
			cout<<"O carro ficou sem combustível"<<endl;
		}
		return litros_restantes;
	}	
