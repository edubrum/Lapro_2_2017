#include"condicionador.h"
#include<iostream>
using namespace std;
int main(void){
	Condicionador cond1,cond2;
	int _t;
	float _pot;
	for(int i=0;i<=1;i++){
		if(i==0){
			cout<<"Informe a temperatura atual do Condicionador 1:"<<endl;
			cin>>_t;
			cond1.set_t(_t);
			cout<<"Informe a potência de 1 a 10 que você deseja utilizar para baixar a temperatura:"<<endl;
			cin>>_pot;
			cond1.set_pot(_pot);
			cout<<"A temperatura do condicionador baixou de:"<<cond1.get_t()<<" para:"<<cond1.calcula()<<endl;
		}
		else{
			cout<<"Informe a temperatura atual do Condicionador 2:"<<endl;
			cin>>_t;
			cond2.set_t(_t);
			cout<<"Informe a potência de 1 a 10 que você deseja utilizar para baixar a temperatura:"<<endl;
			cin>>_pot;
			cond2.set_pot(_pot);
			cout<<"A temperatura do condicionador baixou de:"<<cond2.get_t()<<" para:"<<cond2.calcula()<<endl;
		}	
	}
	return 0;
}
	
