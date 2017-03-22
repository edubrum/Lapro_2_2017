#include"pessoa.h"
#include<string>
#include<iostream>
using namespace std;
	Pessoa::Pessoa(){
		nome="nenhum";
		idade=0;
		tamanho=0.00;
	}
	void Pessoa::set_nome(string _nome){
		nome=_nome;
	}
	void Pessoa::set_idade(int _idade){
		idade=_idade;
	}
	void Pessoa::set_tamanho(float _tamanho){
		tamanho=_tamanho;
	}
	string Pessoa::get_nome(){
		return nome;
	}
	int Pessoa::get_idade(){
		return idade;
	}
	float Pessoa::get_tamanho(){
		return tamanho;
	}
	
