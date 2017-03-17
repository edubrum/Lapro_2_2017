#ifndef _relogio_h_
#define _relogio_h_
#include<iostream>
using namespace std;
class Relogio{
	private:
		int hora,minuto,segundo;
	public:
		Relogio();
		void set_hora(int _hora,int _minuto,int _segundo);
		void get_hora();
		void avancar();
};
#endif
