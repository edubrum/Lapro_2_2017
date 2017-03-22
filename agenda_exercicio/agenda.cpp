#include"agenda.h"
#include"pessoa.h"
#include<string>
#include<iostream>
using namespace std;
	Agenda::Agenda(){
		for(i=0;i<10;i++){
			Povo[i].set_nome("nenhum");
			Povo[i].set_idade(-1);
			Povo[i].set_tamanho(0.00);
		}
		i=0;
	}
	void Agenda::armazena_pessoa(string _nome,int _idade, float _tamanho){
		Povo[i].set_nome(_nome);
		Povo[i].set_idade(_idade);
		Povo[i].set_tamanho(_tamanho);
		i=i+1;
	}
	void Agenda::remove_pessoa(string _nome){
		for(i=0;i<10;i++){
			if(Povo[i].get_nome()==_nome){
				Povo[i].set_nome("nenhum");
				Povo[i].set_idade(-1);
				Povo[i].set_tamanho(0.00);
			}
		}
	}
	int Agenda::busca_pessoa(string _nome){
		for(i=0;i<10;i++){
			if(Povo[i].get_nome()==_nome){
				return i;
			}
		}
	}
	void Agenda::imprime_pessoa(int _i){
		for(i=0;i<10;i++){
			if(i==_i){
				if(Povo[i].get_nome()!="nenhum"){
					cout<<"Nome:"<<Povo[i].get_nome()<<endl;
					cout<<"Idade:"<<Povo[i].get_idade()<<endl;
					cout<<"Tamanho:"<<Povo[i].get_tamanho()<<endl;
				}
			}
		}
	}
	void Agenda::imprime_povo(){
		for(int i=0;i<10;i++){
			if(Povo[i].get_nome()!="nenhum"){
				cout<<"Nome:"<<Povo[i].get_nome()<<endl;
				cout<<"Idade:"<<Povo[i].get_idade()<<endl;
				cout<<"Tamanho:"<<Povo[i].get_tamanho()<<endl;
			}
		}
	}
