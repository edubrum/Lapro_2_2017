#include<string>
#include<iostream>
using namespace std;
#include"candidato.h"
	Candidato::Candidato(){
		nome="nenhum";
		voto=0;
	}
	string Candidato::get_nome(){
		return nome;
	}
	void Candidato::set_nome(string _nome){
		nome=_nome;
	}
	int Candidato::get_voto(){
		return voto;
	}
	void Candidato::set_voto(int _voto){
		voto=_voto;
	}
