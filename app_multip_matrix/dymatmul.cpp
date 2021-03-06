#include<iostream>
using namespace std;
void flush(){
	int i;
	for(i=0;i<60;i++)
		cout<<endl;	
}
int main(void){
	int i,j,l,c,u,v,**A,**B,**C,entra_num;
	//u = tamanho fixo, podendo ser infromado pelo usuário, das linhas
	//v = tamanho fixo, podendo ser informado pelo usuário, das colunas
	u=v=2;
	i=j=l=c=0;
	//criação das matriz por alocação dinamica
	A = new int*[u];
	B = new int*[u];
	C = new int*[u];
	for (i = 0; i < u; i++){
		A[i] = new int[v];
		B[i] = new int[v];
		C[i] = new int[v];
		
	}
	//as três matrizes serão límpas:
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			A[i][j]=0;
			B[i][j]=0;
			C[i][j]=0;
		}
	}
	flush();
	cout<<"Inicialmente as matrizes estão zeradas:"<<endl<<endl<<" A =";
	for(l=0;l<u;l++){
		for(c=0;c<v;c++){
			if((c==0)&&(l==1))
				cout<<"    |"<<A[l][c]<<" ";
			else{
				if(c==0)
					cout<<"|"<<A[l][c]<<" ";
				else
					cout<<A[l][c]<<"|";
			}
		}
		cout<<endl;
	}
	cout<<endl<<" B =";
	for(l=0;l<u;l++){
		for(c=0;c<v;c++){
			if((c==0)&&(l==1))
				cout<<"    |"<<B[l][c]<<" ";
			else{
				if(c==0)
					cout<<"|"<<B[l][c]<<" ";
				else
					cout<<B[l][c]<<"|";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	//aqui começa a inserção de valores nas matrizes;
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			cout<<"Digite um valor para A["<<i<<"]["<<j<<"]: ";
			cin>>entra_num;
			A[i][j]=entra_num;
			cout<<" A =";
			for(l=0;l<u;l++){
				for(c=0;c<v;c++){
					if((c==0)&&(l==1))
						cout<<"    |"<<A[l][c]<<" ";
					else{
						if(c==0)
							cout<<"|"<<A[l][c]<<" ";
						else
							cout<<A[l][c]<<"|";
					}
				}
				cout<<endl;
			}
		}
	}
	cout<<endl<<endl;
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			cout<<"Digite um valor para B["<<i<<"]["<<j<<"]: ";
			cin>>entra_num;
			B[i][j]=entra_num;
			cout<<" B =";
			for(l=0;l<u;l++){
				for(c=0;c<v;c++){
					if((c==0)&&(l==1))
						cout<<"    |"<<B[l][c]<<" ";
					else{
						if(c==0)
							cout<<"|"<<B[l][c]<<" ";
						else
							cout<<B[l][c]<<"|";
					}
				}
				cout<<endl;
			}
		}
	}
	//printando as matrizes criadas
	cout<<endl<<"Você criou as matrizes:"<<endl<<endl<<" A =";
			for(l=0;l<u;l++){
				for(c=0;c<v;c++){
					if((c==0)&&(l==1))
						cout<<"    |"<<A[l][c]<<" ";
					else{
						if(c==0)
							cout<<"|"<<A[l][c]<<" ";
						else
							cout<<A[l][c]<<"|";
					}
				}
				cout<<endl;
			}
	cout<<endl<<" B =";
			for(l=0;l<u;l++){
				for(c=0;c<v;c++){
					if((c==0)&&(l==1))
						cout<<"    |"<<B[l][c]<<" ";
					else{
						if(c==0)
							cout<<"|"<<B[l][c]<<" ";
						else
							cout<<B[l][c]<<"|";
					}
				}
				cout<<endl;
			}
	cout<<endl;
	//lembrando que:
	//u = tamanho fixo, podendo ser infromado pelo usuário, das linhas
	//v = tamanho fixo, podendo ser informado pelo usuário, das colunas
	//multiplicando -> A*B =C
	for(i=0;i<u;i++){
		for(j=0;j<v;j++){
			if(i==0){
				C[i][0]=C[i][0]+(A[i][j]*B[j][i]);
				C[i][1]=C[i][1]+(A[i][j]*B[j][i+1]);
			}
			else{
				C[i][0]=C[i][0]+(A[i][j]*B[j][i-1]);
				C[i][1]=C[i][1]+(A[i][j]*B[j][i]);
			}
		}
	}
	//printando o resultado
	cout<<endl<<"A multiplicação de A por B é"<<endl<<endl<<" C =";
			for(l=0;l<u;l++){
				for(c=0;c<v;c++){
					if((c==0)&&(l==1))
						cout<<"    |"<<C[l][c]<<" ";
					else{
						if(c==0)
							cout<<"|"<<C[l][c]<<" ";
						else
							cout<<C[l][c]<<"|";
					}
				}
				cout<<endl;
			}
	cout<<endl;
	//apaga as matrizes A, B e C alocadas, para não estourar a memória
	for (i = 0; i < u; i++){
		delete [] A[i];
		delete [] B[i];
		delete [] C[i];
	}
	delete [] A;
	delete [] B;
	delete [] C;
	return 0;
}
