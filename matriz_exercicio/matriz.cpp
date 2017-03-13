#include<iostream>
using namespace std;
int main(void){
	int i,num,j,matriz[5][5],menor,menor_i;
	i=j=0;
	menor=menor_i=999999;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<"Digite um numero:"<<endl;
			cin>>num;
			matriz[i][j]= num;
			if(matriz[i][j]<menor){
				menor=matriz[i][j];
				menor_i=i;
			}
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<matriz[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<"O menor valor é:"<<menor<<endl;
	cout<<"E está localizado na linha:"<<menor_i<<endl;
	return 0;
}
