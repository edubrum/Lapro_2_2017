#ifndef _carro_h_
#define _carro_h_
#include<iostream>
using namespace std;
class Carro{
	private:
		float litro,distancia;
	public:
		Carro();
		void set_litro(float _litro);
		void set_distancia(float _distancia);
		float get_litro();
		float get_distancia();
		float combustivel_restante();
};
#endif
