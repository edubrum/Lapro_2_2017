#include"elevador.h"
#include<iostream>
#include<string>
using namespace std;
int main(void){
	Elevador el;
	int _capacidade,_andares;
	string var, resp;
	cout<<"Informe o número de andares do prédio e a capacidade do elevador:"<<endl;
	cin>>_andares;
	cin>>_capacidade;
	el.inicializa(_capacidade,_andares);
	var="sim";
	do{
		cout<<"Há alguém querendo entrar?"<<endl;
		cin>>resp;
		if(resp=="sim"){
			el.entra();
		}
		cout<<"Você deseja subir ou descer?"<<endl;
		cin>>resp;
		if(resp=="subir"){
			el.sobe();
		}
		else{
			el.desce();
		}
		cout<<"Há alguém querendo sair?"<<endl;
		cin>>resp;
		if(resp=="sim"){
			el.sai();
		}
		cout<<"Capacidade do elevador:"<<el.get_capacidade()<<" Ocupação atual:"<<el.get_ocupantes()<<endl;
		cout<<"Total de andares do prédio:"<<el.get_andares()<<" Andar atual:"<<el.get_andar_atual()<<endl;
		cout<<"Deseja continuar?"<<endl;
		cin>>var;
	}while(var=="sim");
	return 0;
}
