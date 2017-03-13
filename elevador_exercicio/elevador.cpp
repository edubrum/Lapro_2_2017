#include"elevador.h"
#include<iostream>
using namespace std;
	Elevador::Elevador(){
		andares=ocupantes=andar_atual=capacidade=0;
	void Elevador::inicializa(int _capacidade,int _andares){
		andares=_andares;capacidade=_capacidade;
	}
	void Elevador::entra(int capacidade,int _ocupantes){
		if(capacidade>_ocupantes){
			_ocupantes=_ocupantes+1;
		}
		else{
			cout<<"O elevador já está lotado"<<endl;
		}
	}
	void Elevador::sai(int _ocupantes){
		if(_ocupantes!=0){
			_ocupantes=_ocupantes - 1;
		}
		else{
			cout<<"O elevador já está vazio"<<endl;
		}
	}
	void Elevador::sobe(int andares,int _andar_atual){
		if(andares==_andar_atual){
			cout<<"Não é possível subir mais um andar, já estamos no último"<<endl;
		}
		else{
			_andar_atual=_andar_atual+1;
		}
	}
	void Elevador::desce(int _andar_atual){
		if(_andar_atual==0){
			cout<<"Não é possível descer mais, já estamos no último andar"<<endl;
		}
		else{
			_andar-atual=_andar_atual-1;
		}
	}
	int Elevador::get_andar_atual(){
		return _andar_atual;
	}
	int Elevador::get_ocupantes(){
		return _ocupantes;
	}
	int Elevador::get_capacidade(){
		return capacidade;
	}
	int Elevador::get_andares(){
		return andares;
	}
