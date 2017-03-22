#include"carro.h"
#include<iostream>
using namespace std;
int main(void){
	Carro toyota,hiunday;
	float _litro,_distancia;
	cout<<"Diga a quantidade de litros q deseja abastecer o carro:"<<endl;
	cin>>_litro;
	do{
		if(_litro>50.00){
			cout<<"Por favor insira menos de 50 litros, é o limite do carro"<<endl;
			cin>>_litro;
		}
	}while(_litro>50.00);
	toyota.set_litro(_litro);
	cout<<"Diga a distancia a ser percorrida:"<<endl;
	cin>>_distancia;
	toyota.set_distancia(_distancia);
	cout<<"Diga a quantidade de litros q deseja abastecer o carro:"<<endl;
	cin>>_litro;
	do{
		if(_litro>50.00){
			cout<<"Por favor insira menos de 50 litros, é o limite do carro"<<endl;
			cin>>_litro;
		}
	}while(_litro>50.00);
	hiunday.set_litro(_litro);
	cout<<"Diga a distancia a ser percorrida:"<<endl;
	cin>>_distancia;
	hiunday.set_distancia(_distancia);
	cout<<"Distancia do primeiro carro:"<<toyota.get_distancia()<<"Combustivel restante:"<<toyota.combustivel_restante()<<endl;
	cout<<"Distancia do segundo carro:"<<hiunday.get_distancia()<<"Combustivel restante:"<<hiunday.combustivel_restante()<<endl;
	return 0;
}
