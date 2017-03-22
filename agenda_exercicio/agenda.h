#ifndef _agenda_h_
#define _agenda_h_
#include"pessoa.h"
#include<string>
#include<iostream>
using namespace std;
class Agenda{
	private:
		Pessoa Povo[10];
		int i;
	public:
		Agenda();
		void armazena_pessoa(string _nome,int _idade,float _tamanho);
		void remove_pessoa(string _nome);
		int busca_pessoa(string _nome);
		void imprime_povo();
		void imprime_pessoa(int i);
		
};
#endif
