#ifndef _elevador_h_
#define _elevador_h_
#include<iostream>
using namespace std;
class Elevador{
	private:
		int andares,capacidade,ocupantes,andar_atual;
	public:
		Elevador();
		void inicializa(int _capacidade,int _andares);
		void entra();
		void sai();
		void sobe();
		void desce();
		int get_andar_atual();
		int get_ocupantes();
		int get_capacidade();
		int get_andares();
};
#endif
