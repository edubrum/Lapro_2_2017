#include"elevador.h"
#include<iostream>
using namespace std;
	Elevador::Elevador(){
		andares=ocupantes=andar_atual=capacidade=0;
	}
	void Elevador::inicializa(int _capacidade,int _andares){
		andares=_andares;capacidade=_capacidade;
	}
	void Elevador::entra(){
		if(capacidade>ocupantes){
			ocupantes=ocupantes+1;
		}
		else{
			cout<<"O elevador já está lotado"<<endl;
		}
	}
	void Elevador::sai(){
		if(ocupantes!=0){
			ocupantes=ocupantes - 1;
		}
		else{
			cout<<"O elevador já está vazio"<<endl;
		}
	}
	void Elevador::sobe(){
		if(andares==andar_atual){
			cout<<"Não é possível subir mais um andar, já estamos no último"<<endl;
		}
		else{
			andar_atual=andar_atual+1;
		}
	}
	void Elevador::desce(){
		if(andar_atual==0){
			cout<<"Não é possível descer mais, já estamos no último andar"<<endl;
		}
		else{
			andar_atual=andar_atual-1;
		}
	}
	int Elevador::get_andar_atual(){
		return andar_atual;
	}
	int Elevador::get_ocupantes(){
		return ocupantes;
	}
	int Elevador::get_capacidade(){
		return capacidade;
	}
	int Elevador::get_andares(){
		return andares;
	}
