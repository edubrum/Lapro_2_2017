#ifndef nodo
#define nodo
#include"pessoa.h"
#include<iostream>
using namespace std;
class Nodo{
	private:
		Pessoa info;
		Nodo *prox;
	public:
		Nodo(){
			prox=info=NULL;
		}
		void setProx(Nodo *p){
			prox=p;
		}
		void setInfo(string nome,string *gosto,Nodo* lAmigos){
			info.nome=nome;inf->gosto=gosto;info->lAmigos=lAmigos;
		}
		Nodo* getProx(){
			return prox;
		}
		Pessoa getInfo(){
			return info;
		}
};
#endif
				
