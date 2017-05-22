#ifndef conta
#define conta
#include<string>
#include<iostream>
using namespace std;
class Conta{
	int numero_conta;
	string nome;
	float saldo;
	public:
		Conta(){
			numero_conta=0;nome="_";saldo=0.00;
		}
		void set_numero(int _num){
			numero_conta=_num;
		}
		void set_nome(string _nome){
			nome=_nome;
		}
		void set_saldo(float _saldo){
			saldo=_saldo;
		}
		int get_numero(){
			return numero_conta;
		}
		string get_nome(){
			return nome;
		}
		float get_saldo(){
			return saldo;
		}
		void imprime_extrato(){
			cout<<"Extrato:"<<get_saldo()<<endl;
			cout<<"Nome:"<<get_nome()<<endl;
			cout<<"Número da conta:"<<get_numero()<<endl;
		}
};
#endif
