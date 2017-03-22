#include"agenda.h"
#include"pessoa.h"
#include<string>
#include<iostream>
using namespace std;
	Agenda::Agenda(){
		Povo[10].set_nome("nenhum");
		Povo[10].set_idade(-1);
		Povo[10].set_tamanho(0.00);
		i=0;
	}
	void Agenda::armazena_pessoa(string _nome,int _idade, float _tamanho){
		Povo[i].set_nome(_nome);
		Povo[i].set_idade(_idade);
		Povo[i].set_tamanho(_tamanho);
	}
	void Agenda::remove_pessoa(string _nome){
		for(i=1;i<=10;i++){
			if(Povo[i].get_nome()==_nome){
				 delete *Povo[i];
				i=i+1;
			}
		}
	}
	int Agenda::busca_pessoa(string _nome){
		for(i=1;i<=10;i++){
			if(Povo[i].get_nome()==_nome){
				return i;
			}
		}
	}
	void Agenda::imprime_pessoa(int _i){
		for(i=1;i<=10;i++){
			if(i==_i){
				cout<<"Nome:"<<Povo[i].get_nome()<<endl;
				cout<<"Idade:"<<Povo[i].get_idade()<<endl;
				cout<<"Tamanho:"<<Povo[i].get_tamanho()<<endl;
			}
		}
	}
		
