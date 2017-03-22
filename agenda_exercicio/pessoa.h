#ifndef _pessoa_h_
#define _pessoa_h_
#include<iostream>
#include<string>
using namespace std;
class Pessoa{
	private:
		string nome;
		int idade;
		float tamanho;
	public:
		Pessoa();
		void set_nome(string _nome);
		void set_idade(int _idade);
		void set_tamanho(float _tamanho);
		string get_nome();
		int get_idade();
		float get_tamanho();
};
#endif	
