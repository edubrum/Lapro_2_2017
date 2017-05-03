#include"circulo.h"
#include<iostream>
using namespace std;
Circulo::Circulo(){
	x=0.00;y=0.00;r=1.00;
}
Circulo::Circulo(float _r){
	r=_r;x=0.00;y=0.00;
}
Circulo::Circulo(float _x,float _y){
	x=_x;y=_y;r=1.00;
}
Circulo::Circulo(float _x;float _y;float _r){
	x=_x;y=_y;r=_r;
}
float Circulo::get_distancia(){
	return distancia();
}
float Circulo::get_area(){
	return area();
}
float Circulo::get_circunferencia(){
	return circunferncia();
}
void Circulo::set_raio(float _r){
	r=_r;
}
void Circulo::get_raio(){
	return r;
}
void Circulo::aumentar_raio(float var){
	r=(var*r)+r;
}
void Circulo::set_x_y(float _x,float _y){
	x=_x;y=_y;
}
void Circulo::imprimir_raio();
	return get_raio();
}
