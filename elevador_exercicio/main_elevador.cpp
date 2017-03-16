#include"elevador.h"
#include<iostream>
#include<string>
using namespace std;
int main(void){
	Elevador el;
	int _capacidade,_andares;
	string var, resp;
	cout<<"Informe o número de andares do prédio:"<<endl;
	cin>>_andares;
	cout<<"Informe a capacidade máxima do elevador:"<<endl;
	cin>>_capacidade;
	el.inicializa(_capacidade,_andares);
	cout<<"Capacidade do elevador:"<<el.get_capacidade()<<" Ocupação atual:"<<"0"<<endl;
	cout<<"Total de andares do prédio:"<<el.get_andares()<<" Andar atual:"<<"Térreo"<<endl;
	var="sim";
	do{		
		do{
			cout<<"Há alguém querendo entrar?"<<endl;
			cin>>resp;
			if(resp=="sim"){
				int pes;
				cout<<"Quantas pessoas?"<<endl;
				cin>>pes;
				for(int i=0;i<pes;i++){
					el.entra();
				}
			}
			cout<<"Há mais alguém querendo entrar?"<<endl;
			cin>>resp;
		}while(resp=="sim");
		do{			
			cout<<"Você deseja subir ou descer?"<<endl;
			cin>>resp;
			int floor,i;
			cout<<"Quantos andares?"<<endl;
			cin>>floor;
			if((resp=="subir")||(resp=="descer")){
				if(resp=="subir"){
					for(i=0;i<floor;i++){										
						el.sobe();
					}
				}
				if(resp=="descer"){
					for(i=0;i<floor;i++){
						el.desce();
					}
				}
			}
			else{
				cout<<"Escreva (subir) ou (descer) por favor"<<endl;
			}
			cout<<"Há alguém mais querendo subir ou descer?"<<endl;
			cin>>resp;
		}while(resp=="sim");
		do{
			cout<<"Há alguém querendo sair?"<<endl;
			cin>>resp;
			if(resp=="sim"){
				int pes,i;
				cout<<"Quantas pessoas?"<<endl;
				cin>>pes;
				for(i=0;i<pes;i++){
					el.sai();
				}
			}
			cout<<"Há mais alguém querendo sair?"<<endl;
			cin>>resp;
		}while(resp=="sim");
		cout<<"Capacidade do elevador:"<<el.get_capacidade()<<" Ocupação atual:"<<el.get_ocupantes()<<endl;
		cout<<"Total de andares do prédio:"<<el.get_andares()<<" Andar atual:"<<el.get_andar_atual()<<endl;
		cout<<"Deseja continuar?"<<endl;
		cin>>var;
	}while(var=="sim");
	return 0;
}
