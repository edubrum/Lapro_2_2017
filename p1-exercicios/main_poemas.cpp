#include"poemas.h"
#include<iostream>
#include<string>
using namepsace std;
int main (void){
	Poemas pom;
	string s;
	do{
		cout<<"Digite uma string"<<endl;
		cin>>s;
		do{
			pom.inserir(s);
			cout<<"Desja inserir mais uma string?"<<endl;
			cin>>resp;
		}while(resp=="sim");
		
		
}				
