#include<iostream>
using namespace std;
int main(void){
	int u = 2, v = 2,**A,**B,**C,i,j;
	//criação da matriz por alocação dinamica
	A = new int*[u];
	B = new int*[u];
	C = new int*[u];
	for (i = 0; i < u; i++){
		A[i] = new int[v];
		B[i] = new int[v];
		C[i] = new int[v];
		
	}
	//preenchimento da matriz
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			A[i][j]=0;
			B[i][j]=0;
			C[i][j]=0;
		}
	}
	//print da matriz A
	cout<<"A ="<<endl;
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			cout<<A[i][j];
		}
		cout<<endl;
	}
	//print da matriz B
	cout<<"B ="<<endl;
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			cout<<B[i][j];
		}
		cout<<endl;
	}
	//print da matriz C
	cout<<"C ="<<endl;
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			cout<<C[i][j];
		}
		cout<<endl;
	}
	//apaga a matriz A alocada, para não estourar a memória
	for (i = 0; i < u; i++){
		delete [] A[i];
	}
	delete [] A;
	//apaga a matriz B alocada, para não estourar a memória
	for (i = 0; i < u; i++){
		delete [] B[i];
	}
	delete [] B;
	//apaga a matriz C  alocada, para não estourar a memória
	for (i = 0; i < u; i++){
		delete [] C[i];
	}
	delete [] C;
	return 0;
}









