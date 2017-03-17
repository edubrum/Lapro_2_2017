#include"relogio.h"
#include<iostream>
using namespace std;
	Relogio::Relogio(){
		hora=minuto=segundo=0;
	}
	void Relogio::set_hora(int _hora,int _minuto,int _segundo){
		hora=_hora;minuto=_minuto;segundo=_segundo;
	}
	void Relogio::get_hora(){
		cout<<"Agora são:"<<hora<<":"<<minuto<<":"<<segundo<<endl;
	}
	void Relogio::avancar(){
		segundo+=1;
		if(segundo==60){
			minuto+=1;
			segundo=0;
		}
		if(minuto==60){
			hora+=1;
			minuto=0;
		}
	}
