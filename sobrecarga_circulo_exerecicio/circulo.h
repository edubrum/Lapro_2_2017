#ifndef _circulo_h_
#define _circulo_h_
#include<iostream>
#include<string>
using namespace std;
class Circulo{
	private:
		float r,x,y;
		distancia_circulos();
		area(float r);
		circunferencia();
	public:
		Circulo();
		Circulo(float _r);
		Circulo(float _x,float _y);
		Circulo(float _x,float _y,float _r);
		get_distancia();
		get_area();
		get_circunferencia();
		set_raio(float _r);
		aumentar_raio(float var);
		set_x_y(float _x,float _y);
		imprimir_raio();
		imprimir_centro();
		imprimir_area();
);
#endif
