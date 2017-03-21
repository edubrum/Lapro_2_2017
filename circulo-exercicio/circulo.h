#ifndef _circulo_h_
#define _circulo_h_
#include<math.h>
#include<iostream>
using namespace std;
class Circulo{
	private:
		float raio,x_c,y_c,taxa;
		float area();
		float dist_centros(float ax,float bx,float ay,float by);
		float circunferencia();
	public:
		Circulo();		
		void set_raio(float _raio);
		float get_raio();
		void set_taxa(float _taxa);
		float get_taxa();
		float aumento(float Taxa);
		void set_x_c(float _x_c);
		void set_y_c(float _y_c);
		float get_x_c();
		float get_y_c();
		void imprime_raio(float Raio_c1,float Raio_c2);
		void imprime_centro(float ax,float ay,float bx,float by);
		void imprime_area(float Area_c1,float Area_c2);
		float get_area();
		float get_dist_centros();
		float get_circunferencia();
};
#endif

