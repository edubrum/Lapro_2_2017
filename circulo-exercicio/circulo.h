#ifndef _circulo_h_
#define _circulo_h_
#include<math.h>
#include<iostream>
using namespace std;
class Circulo{
	private:
		float raio,x_c,y_c,taxa;
		float area();
		float dist_centros();
		float circunferencia();
	public:
		Circulo();		
		void set_raio(float _raio);
		float get_raio();
		void set_taxa(float _taxa);
		float get_taxa();
		void aumento(float Taxa);
		void set_x_c(float _x_c);
		void set_y_c(float _y_c);
		float get_x_c();
		float get_x_c;
		void imprime_raio();
		void imprime_centro();
		void imprime_area();
};
#endif

