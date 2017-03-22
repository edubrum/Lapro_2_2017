#ifndef _condicionador_h_
#define _condicionador_h_
#include<iostream>
using namespace std;
class Condicionador{
	private:
		int t;
		float pot;
	public:
		Condicionador();
		void set_t(int _t);
		void set_pot(float _pot);
		int get_t();
		float get_pot();
		float calcula();
};
#endif
