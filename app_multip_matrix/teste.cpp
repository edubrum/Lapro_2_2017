#include<iostream>
using namespace std;
void flush(){
	int i;
	for(i=0;i<60;i++)
		cout<<endl;	
}
int main(void){
	int i,j,l,c,u_A,v_A,u_B,v_B,**A,**AT,**B,**C,entra_num;
	//u = tamanho fixo, podendo ser infromado pelo usuário, das linhas
	//v = tamanho fixo, podendo ser informado pelo usuário, das colunas
	flush();
	cout<<"Insira o num de colunas de A: ";
	cin>>v_A;
	u_B=v_A;
	u_A=v_B=2;
	i=j=l=c=0;
	//criação das matriz por alocação dinamica
	A = new int*[u_A];
	AT= new int*[v_A];
	B = new int*[u_B];
	C = new int*[u_A];
	for (i = 0; i < u_A ; i++){
		A[i] = new int[v_A];
		C[i] = new int[v_B];

	}
	for( i = 0 ; i < u_B;i++){
	B[i] = new int[v_B];
	AT[i]= new int[u_A];
	}
	//as três matrizes serão límpas:
	for(i=0;i<u_A;i++){
		for(j=0;j<v_A;j++){
			A[i][j]=0;
		}
	}
	for(i=0;i<u_B;i++){
		for(j=0;j<v_B;j++){
			B[i][j]=0;
			AT[i][j]=0;
		}
	}
	for(i=0;i<u_A;i++){
		for(j=0;j<v_B;j++){
			C[i][j]=0;
		}
	}
	flush();
	cout<<"Inicialmente as matrizes estão zeradas:"<<endl<<endl<<" A =";
	for(l=0;l<u_A;l++){
		for(c=0;c<v_A;c++){
			if((c==0)&&(l==1))
				cout<<"    |"<<A[l][c]<<" ";
			else{
				if((c==0)&&(l==0))
					cout<<"|"<<A[l][c]<<" ";
				else{
					if(c== (v_A - 1)) 
						cout<<A[l][c]<<"|";
					else
						cout<<A[l][c]<<" ";
				}
			}
		}
		cout<<endl;
	}
	cout<<endl<<" B =";
	for(l=0;l<u_B;l++){
		for(c=0;c<v_B;c++){
			if((c==0)&&(l==0))
				cout<<"|"<<B[l][c]<<" ";
			else{
				if(c==0)
					cout<<"    |"<<B[l][c]<<" ";
				else	
					cout<<B[l][c]<<"|";
			}
		}
		cout<<endl;
	}
	cout<<endl<<" A Transposta =";
	for(l=0;l<v_A;l++){
		for(c=0;c<u_A;c++){
			if((c==0)&&(l==0))
				cout<<"|"<<AT[l][c]<<" ";
			else{
				if(c==0)
					cout<<"               |"<<AT[l][c]<<" ";
				else	
					cout<<AT[l][c]<<"|";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	//aqui começa a inserção de valores nas matrizes;
	for(i=0;i<u_A;i++){
		for(j=0;j<v_A;j++){
			cout<<"Digite um valor para A["<<i<<"]["<<j<<"]: ";
			cin>>entra_num;
			A[i][j]=entra_num;
			cout<<" A =";
			for(l=0;l<u_A;l++){
				for(c=0;c<v_A;c++){
					if((c==0)&&(l==1))
						cout<<"    |"<<A[l][c]<<" ";
					else{
						if((c==0)&&(l==0))
							cout<<"|"<<A[l][c]<<" ";
						else{
							if(c== (v_A - 1))
								cout<<A[l][c]<<"|";
							else
								cout<<A[l][c]<<" ";
						}
					}
				}
				cout<<endl;
			}
		}
	}
	cout<<endl<<endl;
	for(i=0;i<u_B;i++){
		for(j=0;j<v_B;j++){
			cout<<"Digite um valor para B["<<i<<"]["<<j<<"]: ";
			cin>>entra_num;
			B[i][j]=entra_num;
			cout<<" B =";
			for(l=0;l<u_B;l++){
				for(c=0;c<v_B;c++){
					if((c==0)&&(l==0))
						cout<<"|"<<B[l][c]<<" ";
					else{
						if(c==0)
							cout<<"    |"<<B[l][c]<<" ";
						else
							cout<<B[l][c]<<"|";
					}
				}
				cout<<endl;
			}
		}
	}
	//criando AT
	for(i=0;i<u_B;i++){
		for(j=0;j<v_B;j++){
			AT[i][j]=A[j][i];
		}
	}
	//printando as matrizes criadas
	cout<<endl<<"Você criou as matrizes:"<<endl<<endl<<" A =";
			for(l=0;l<u_A;l++){
				for(c=0;c<v_A;c++){
					if((c==0)&&(l==1))
						cout<<"    |"<<A[l][c]<<" ";
					else{
						if((c==0)&&(l==0))
							cout<<"|"<<A[l][c]<<" ";
						else{
							if(c== (v_A - 1))
								cout<<A[l][c]<<"|";
							else
								cout<<A[l][c]<<" ";
						}
					}
				}
				cout<<endl;
			}
	cout<<endl<<" B =";
			for(l=0;l<u_B;l++){
				for(c=0;c<v_B;c++){
					if((c==0)&&(l==0))
						cout<<"|"<<B[l][c]<<" ";
					else{
						if(c==0)
							cout<<"    |"<<B[l][c]<<" ";
						else
							cout<<B[l][c]<<"|";
					}
				}
				cout<<endl;
			}
	cout<<endl<<" A Transposta =";
			for(l=0;l<v_A;l++){
				for(c=0;c<u_A;c++){
					if((c==0)&&(l==0))
						cout<<"|"<<AT[l][c]<<" ";
					else{
						if(c==0)
							cout<<"               |"<<AT[l][c]<<" ";
						else
							cout<<AT[l][c]<<"|";
					}
				}
				cout<<endl;
			}
	cout<<endl;
	//lembrando que:
	//u = tamanho fixo, podendo ser infromado pelo usuário, das linhas
	//v = tamanho fixo, podendo ser informado pelo usuário, das colunas
	//multiplicando -> A*B =C
	for(i=0;i<u_A;i++){
		for(j=0;j<v_A;j++){
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
			for(l=0;l<u_A;l++){
				for(c=0;c<v_B;c++){
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
	for (i = 0; i < u_A; i++){
		delete [] A[i];
		delete [] C[i];
		
	}
	for(i = 0; i< u_B ; i++){
		delete [] B[i];
		delete [] AT[i];
	}
	delete [] A;
	delete [] AT;
	delete [] B;
	delete [] C;
	return 0;
}
