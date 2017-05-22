#include"conta_bancaria.h"
#include"conta__limite.h"
#include<cstdlib>
#include<iostream>
int main(void){
	Conta Co1;
	string _nome;
	int _num=,_limite;
	float _saldo;
	cout<<"Insira um saldo e um nome"<<endl;
	cin>>_saldo;
	cin>>_nome;
	Co1.set_nome(_nome);
	Co1.set_saldo(_saldo);
	_num=1+rand()%70000;
	Co1.set_numero(_num);
	Co1.imprime_extrato();
	ContaComLimite Co2;
	cout<<"Insira um saldo m, um nome e um limite para o cartão"<<nedl;
	cin>>_saldo;
	cin>>_nome;
	cin>>_limite;
	Co2.set_nome(_nome);
	_num=1+rand()%70000;
	Co2.set_numero(_num);
	Co2.imprimte_extrato();
	return 0;
}

