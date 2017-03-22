#include"condicionador.h"
#include<iostream>
using namespace std;
	Condicionador::Condicionador(){
		t=0;pot=0.0;
	}
	void Condicionador::set_t(int _t){
		t=_t;
	}
	void Condicionador::set_pot(float _pot){
		pot=_pot;
	}
	int Condicionador::get_t(){
		return t;
	}
	float Condicionador::get_pot(){
		return pot;
	}
	float Condicionador::calcula(){
		float temperatura;
		temperatura=t-(1.8*pot);
		return temperatura;
	}
