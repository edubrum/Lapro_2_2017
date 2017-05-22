#ifndef pessoa
#define pessoa
#include"nodo.h"
#include<iostream>
using namespace std;
class Pessoa{
	public:
		string nome;
		string *gosto;
		Nodo *lAmigos;
		Pessoa(){
			nome=gosto=lAmigos=NULL;
		}
		inlcuirContato(Pessoa *info){
			Nodo *aux;
			if(lamigos==NULL){			
				aux=new Nodo();
				aux->info;
				aux->setProx(NULL);
				lAmigos=aux;
			}
			else{
				aux=new Nodo();
				aux=info;
				aux->Prox(lAmigos);
				lista=aux;
				
			}
		}
		excluirContato(Pessoa *info){
			Nodo *aux;
			aux=lAmigos;
			
			
	
		
