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
		void entra(int _ocupantes,int _capacidade);
		void sai(int _ocupantes);
		void sobe(int _andares,int _andar_atual);
		void desce(int _andar_atual);
		int get_andar_atual();
		int get_ocupantes();
		int get_capacidade();
		int get_andares();
};
#endif
