#include"televisao.h"
#include<iostream>
#include<string>
using namespace std;
int main(void){
	string resp;
	Televisao tel;
	int _canal,_volume,_can;
	tel=Televisao();
	cout<<"Insira um canal:"<<endl;
	cin>>_canal;
	tel.set_canal(_canal);
	cout<<"Insira o volume da televisao"<<endl;
	cin>>_volume;
	tel.set_volume(_volume);
	do{
		cout<<"Deseja aumentar o volume?"<<endl;
		cin>>resp;
		if(resp=="sim"){
			tel.aumentar_volume();
		}
		cout<<"Deseja abaixar o volume?"<<endl;
		cin>>resp;
		if(resp=="sim"){
			tel.diminuir_volume();
		}
		cout<<"Deseja aumentar um canal?"<<endl;
		cin>>resp;
		if(resp=="sim"){
			tel.aumentar_canal();
		}
		cout<<"Deseja diminuir um canal?"<<endl;
		if(resp=="sim"){
			tel.diminuir_canal();
		}
		cout<<"Deseja selecionar um canal específico?"<<endl;
		cin>>resp;
		if(resp=="sim"){
			cout<<"Qual?"<<endl;
			cin>>_can;
			if(_can>tel.get_canal()){
				tel.sel_aum_canal(_can);
			}
			if(_can<tel.get_canal()){
				tel.sel_dim_canal(_can);
			}
		}
		cout<<"Canal atual:"<<tel.get_canal()<<endl;
		cout<<"Volume atual:"<<tel.get_volume()<<endl;
		cout<<"Deseja continuar?"<<endl;
		cin>>resp;
	}while(resp=="sim");
	return 0;
}
