#include<iostream>
using namespace std;
void flush(){
	int i=0;
	for(i=0;i<60;i++){
		cout<<endl;	
	}
}
int main(void){
	int i,j,l,c,entra_num;
	float A[2][2],B[2][2],C[2][2];
	i=j=l=c=0;
	//as duas matrizes serão límpas:
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			A[i][j]=0;
			B[i][j]=0;
			C[i][j]=0;
		}
	}
	flush();
	cout<<"Inicialmente as matrizes estão zeradas:"<<endl<<endl<<" A =";
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
			if((c==0)&&(l==1))
				cout<<"    |"<<A[l][c]<<" ";
			else{
				if(c==0)
					cout<<"|"<<A[l][c]<<" ";
				else
					cout<<A[c][l]<<"|";
			}
		}
		cout<<endl;
	}
	cout<<endl<<" B =";
	for(l=0;l<2;l++){
		for(c=0;c<2;c++){
			if((c==0)&&(l==1))
				cout<<"    |"<<B[l][c]<<" ";
			else{
				if(c==0)
					cout<<"|"<<B[l][c]<<" ";
				else
					cout<<B[c][l]<<"|";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	//aqui começa a inserção de valores nas matrizes;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Digite um valor para A["<<i<<"]["<<j<<"]: ";
			cin>>entra_num;
			A[i][j]=entra_num;
			cout<<" A =";
			for(l=0;l<2;l++){
				for(c=0;c<2;c++){
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
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Digite um valor para B["<<i<<"]["<<j<<"]: ";
			cin>>entra_num;
			B[i][j]=entra_num;
			cout<<" B =";
			for(l=0;l<2;l++){
				for(c=0;c<2;c++){
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
			for(l=0;l<2;l++){
				for(c=0;c<2;c++){
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
			for(l=0;l<2;l++){
				for(c=0;c<2;c++){
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
	/*C[0][0]=(A[0][0]*B[0][0])+(A[0][1]*B[1][0]); 
	C[0][1]=(A[0][0]*B[0][1])+(A[0][1]*B[1][1]);
	C[1][0]=(A[1][0]*B[0][0])+(A[1][1]*B[1][0]);
	C[1][1]=(A[1][0]*B[0][1])+(A[1][1]*B[1][1]);*/
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
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
			for(l=0;l<2;l++){
				for(c=0;c<2;c++){
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
	return 0;
}












