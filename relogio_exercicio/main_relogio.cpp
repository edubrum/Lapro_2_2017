#include"relogio.h"
#include<iostream>
using namespace std;
int main(void){
	Relogio Mormaii;
	int _hora,_minuto,_segundo,tempo;
	cout<<"Digite a hora atual:"<<endl;
	cout<<"Horas:";
	cin>>_hora;
	cout<<"Minutos:";
	cin>>_minuto;
	cout<<"Segundos:";
	cin>>_segundo;
	Mormaii.set_hora(_hora,_minuto,_segundo);
	Mormaii.get_hora();
	cout<<"Informe quanto tempo deseja avançar no tempo em segundos:";
	cin>>tempo;
	for(int i=0;i<tempo;i++){
		Mormaii.avancar();
	}
	Mormaii.get_hora();
	return 0;
}
