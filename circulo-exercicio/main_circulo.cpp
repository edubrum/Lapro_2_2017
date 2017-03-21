#include"circulo.h"
#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main(void){
	Circulo c1,c2;
	float _raio,_x_c,_y_c,_taxa,Taxa,Raio_c1,Raio_c2,Area_c1,Area_c2,ax,bx,ay,by,Taxa_c1,Taxa_c2;
	string resp;
	cout<<"Informe o raio do Círculo 1:"<<endl;
	cin>>_raio;
	c1.set_raio(_raio);
	Raio_c1=c1.get_raio();
	cout<<"O valor da circunferência de C1 é:"<<c1.get_circunferencia()<<endl;
	Area_c1=c1.get_area();		
	cout<<"Informe o valor de X de C1:"<<endl;
	cin>>_x_c;
	ax=c1.get_x_c();
	cout<<"Informe o valor de Y de C1:"<<endl;
	ay=c1.get_y_c();
	cout<<"Informe a taxa de variação do raio de C1 em porcentagem (%):"<<endl;
	cin>>_taxa;
	Taxa=c1.get_taxa();
	Taxa_c1=Taxa;
	cout<<"Informe o raio do Círculo :"<<endl;
	cin>>_raio;
	c2.set_raio(_raio);
	Raio_c2=c2.get_raio();
	cout<<"O valor da circunferência de C2 é:"<<c2.get_circunferencia()<<endl;
	Area_c2=c2.get_area();		
	cout<<"Informe o valor de X de C1:"<<endl;
	cin>>_x_c;
	bx=c2.get_x_c();
	cout<<"Informe o valor de Y de C1:"<<endl;
	by=c2.get_y_c();
	cout<<"Informe a taxa de variação do raio de C1 em porcentagem (%):"<<endl;
	cin>>_taxa;
	Taxa=c2.get_taxa();
	Taxa_c2=Taxa;
	c1.imprime_raio(Raio_c1,Raio_c2);
	c1.imprime_centro(ax,ay,bx,by);
	c1.imprime_area(Area_c1,Area_c2);
	cout<<"Com o aumento do raio dem C1, o valor ficou:"<<Taxa_c1<<endl;
	cout<<"Com o aumento do raio dem C2, o valor ficou:"<<Taxa_c2<<endl;
	cout<<"A distância dos centros é:"<<c1.get_dist_centros();
	return 0;
}
	
	
