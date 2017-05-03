#include"poemas.h"
#include<string>
Poemas::Poemas(){
	for(int i=0;i<=5;i++){
		frase[]="   ";
	}
	i=0;
}
int Poemas::insere(string s){
	for(i=0;i<=5;i++){
		if(frase[i]=="   "){
			frase[i]=s;
			return 1;
		}
		else
			return 0;
	}
}
int Poemas::remove(string s){
	for(i=0;i<=5;i++){
		if(frase[i]=s){
			frase[i]="   ";
			return 1;
		}
		else
			return 0;
	}
}
