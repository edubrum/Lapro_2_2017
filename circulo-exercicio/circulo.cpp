#include"circulo.h"
#include<math.h>
#include<iostream>
using namespace std;
	Circulo::Circulo(){
		raio=x_c=y_c=taxa=0.0;
	}
	float Circulo::area(){
		return (3.14*raio*raio);
	}
	float Circulo::dist_centros(float ax,float bx,float ay,float by){//ax=c1.get_x_c();
		return(sqrt(pow((by-ay),2)+pow((bx-ax),2)));		//ay=c1.get_y_c();
	}								//bx=c2.get_x_c();
	float Circulo::circunferencia(){				//by=c2.get_y_c();
		return(2.0*3.14*raio);
	}
	void Circulo::set_raio(float _raio){
		raio=_raio;
	}
	void Circulo::set_taxa(float _taxa){
		taxa=_taxa;
	}
	void Circulo::set_x_c(float _x_c){
		x_c=_x_c;
	}
	void Circulo::set_y_c(float _y_c){
		 y_c=_y_c;
	}
	float Ciruculo::get_raio(){
		return raio;
	}
	float Circulo::get_taxa(){
		return taxa;
	}
	float Circulo::get_x_c(){
		return x_c;
	}
	float Circulo::get_y_c(){
		return y_c;
	}
	void Circulo::aumento(float Taxa){//Taxa=c1.get_taxa();
		return (raio*(Taxa/100.0));
	}
	void Ciruculo::imprime_raio(){
		cout<<"O raio de C1 é:"<<c1.get_raio()<<endl;
		cout<<"O raio de C2 é:"<<c2.get_raio()<<endl;
	}
	void Ciruculo::imprime_centro(){
		cout<<"O centro de C1 é:"<<c1.get_centro()<<endl;
		cout<<"O centro de C2 é:"<<c2.get_centro()<<endl;
	}
	void Ciruculo::imprime_area(){
		cout<<"A área de C1 é:"<<c1.get_area()<<endl;
		cout<<"A área de C2 é:"<<c2.get_area()<<endl;
	}	

	
