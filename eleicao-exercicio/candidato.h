#ifndef _candidado_h_
#define _candidato_h_
#include<iostream>
#include<string>
using namespace std;
class Candidato{
	private:
		string nome;
		int voto;
	public:
		Candidato();
		string get_nome();
		void set_nome(string _nome);
		int get_voto();
		void set_voto(int _voto);
		void imprime();
};
#endif
