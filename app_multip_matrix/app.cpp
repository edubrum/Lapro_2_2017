#include<iostream>
using namespace std;
void flush(){
	int i;
	for(i=0;i<60;i++)
		cout<<endl;
}	
int main(void){
	int i,j,n_elem;
	float **X,**XT,**XTX,detXTX,**XTX_inv,*XTY,*B,*Y,entra_x,entra_y;
	flush();
	cout<<"Insira o número de pares ordenados que "<<endl<<"deseja inserir e obter o grafico: ";
	cin>>n_elem;
	i=j=0;
	//criação das matriz por alocação dinamica
	X = 	new float*[n_elem];
	XT= 	new float*[2];
	XTX = 	new float*[2];
	XTX_inv = new float*[2];
	XTY =	new float[2];
	B =	new float[2];
	Y =	new float[n_elem]; 
	for (i = 0; i < 2 ; i++){
		XT[i] =		new float[n_elem];
		XTX[i] =	new float[2];
		XTX_inv[i] =	new float[2];
	}
	for(j=0;j< n_elem;j++)
			X[j] = new float[2];
	//zerando as matrizes
	for(i=0;i<2;i++){
		B[i]=0;
		for(j=0;j<2;j++){
			XTX[i][j]=0;
			XTX_inv[i][j]=0;	
		}		
	}
	for(i=0;i <n_elem;i++){
		for(j=0;j< 2;j++){
			if(j==0){
				XT[j][i]=1;
				X[i][j]=1;
			}
			else{	
				cout<<endl<<" Entre com o par (X,Y); "<<endl<<" Há "<< (n_elem - i)<< " par(es) restantes."<<endl<<" X :";
				cin>>entra_x;
				X[i][j]=entra_x;
				XT[j][i]=entra_x;
				cout<<endl<<" Y :";
				cin>>entra_y;
				Y[i]=entra_y;
			}
		}
	}
	flush();	
	//printando aos pontos e as matrizes
	cout<<endl<< "Com os dados que informou foram criados os pontos:"<<endl;
	for(i=0;i< 2;i++){
		if(i==0)
			cout<<endl<<" x =";
		else
			cout<<" Y =";
		for(j=0;j< n_elem;j++){
			if((j==0)&&(i==0))
				cout<<"|"<<X[j][1]<<" ";
			else{
				if((j==0)&&(i==1))
					cout<<"|"<<Y[j]<<" ";
				else{
					if((i==0)&&(j!=(n_elem -1)))
						cout<<X[j][1]<<" ";
					if((i==1)&&(j!=(n_elem -1)))
						cout<<Y[j]<<" ";
					if((i==0)&&(j==(n_elem -1)))
						cout<<X[j][1]<<"|"<<endl;
					if((i==1)&&(j==(n_elem -1)))
						cout<<Y[j]<<"|";
				}
			}			
		}
		cout<<endl;
	}
	cout<<endl<<" Com os pontos infromados, foram criadas as matrizes:"<<endl<<endl<<" X =";
	for(i=0;i< n_elem;i++){
		for(j=0;j< 2;j++){
			if((j==0)&&(i==0))
				cout<<"|"<<X[i][j]<<" ";
			else{
				if((j==0))
					cout<<"    |"<<X[i][j]<<" ";
				else
					if(j== 1) 
						cout<<X[i][j]<<"|";
			}
		}
		cout<<endl;
	}
	cout<<endl<<" XT =";
	for(i=0;i<2;i++){
		for(j=0;j< n_elem;j++){
			if((j==0)&&(i==0))
				cout<<"|"<<XT[i][j]<<" ";
			else{
				if(j==0)
					cout<<"     |"<<XT[i][j]<<" ";
				else{	
					if((j!=0)&&(j<(n_elem -1)))
						cout<<XT[i][j]<<" ";
					else
						cout<<XT[i][j]<<"|";
				}
			}
		}
		cout<<endl;
	}
	cout<<endl<<" Y =";
	for(i=0;i< n_elem;i++){
		if(i==0)
			cout<<"|"<<Y[i]<<"|";
		else
			cout<<"    |"<<Y[i]<<"|";
		cout<<endl;		
	}
	//multiplicando -> XT*X
	for(i=0;i<2;i++){
		for(j=0;j< n_elem;j++){
			if(i==0){
				XTX[i][0]=XTX[i][0]+(XT[i][j]*X[j][i]);
				XTX[i][1]=XTX[i][1]+(XT[i][j]*X[j][i+1]);
			}
			else{
				XTX[i][0]=XTX[i][0]+(XT[i][j]*X[j][i-1]);
				XTX[i][1]=XTX[i][1]+(XT[i][j]*X[j][i]);
			}
		}
	}
	cout<<endl<<" XT*X =";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if((i==0)&&(j==0))
				cout<<"|"<<XTX[i][j]<<" ";
			else{
				if((i==1)&&(j==0))
					cout<<"       |"<<XTX[i][j]<<" ";
				else
					cout<<XTX[i][j]<<"|";
			}
		}
		cout<<endl;
	}
	detXTX = XTX[0][0]*XTX[1][1]-(XTX[0][1]*XTX[1][0]);
	//Calculando na inversa de XTX:
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==0){
				XTX_inv[i][0]=XTX[1][1]/detXTX;
				XTX_inv[i][1]= -(XTX[1][i])/detXTX;
			}
			else{
				XTX_inv[i][0]= -(XTX[0][i])/detXTX;
				XTX_inv[i][1]=XTX[0][0]/detXTX;
			}
		}
	}
	cout<<endl<<" (XT*X)^(-1) =";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if((j==0)&&(i==1))
				cout<<"              |"<<XTX_inv[i][j]<<" ";
			else{
				if(j==0)
					cout<<"|"<<XTX_inv[i][j]<<" ";
				else
					cout<<XTX_inv[i][j]<<"|";
			}
		}
		cout<<endl;
	}
	//multiplicando -> XT*Y
	for(i=0;i<2;i++){
		for(j=0;j< n_elem;j++){
			if(i==0)
				XTY[i]=XTY[i]+(XT[i][j]*Y[j]);
			else
				XTY[i]=XTY[i]+(XT[i][j]*Y[j]);
		}
	}
	cout<<endl<<" XTY =";
	for(i=0;i< 2;i++){
		if(i==0)
			cout<<"|"<<XTY[i]<<"|";
		else
			cout<<"      |"<<XTY[i]<<"|";
		cout<<endl;		
	}
	//multiplicando -> XTX_inv*XTY= B
	for(i=0;i<2;i++){
		for(j=0;j< n_elem;j++){
			if(i==0)
				B[i]=B[i]+(XTX_inv[i][j]*XTY[j]);
			else
				B[i]=B[i]+(XTX_inv[i][j]*XTY[j]);
		}
	}
	cout<<endl<<" B =";
	for(i=0;i< 2;i++){
		if(i==0)
			cout<<"|"<<B[i]<<"|";
		else
			cout<<"    |"<<B[i]<<"|";
		cout<<endl;		
	}
	cout<<endl<<" A partir dos pontos iniciais, obteve-se a reta:"<<endl<<endl<<"		"<<"Y(x) = ";
	if((B[1]>0)&&(B[0]!=0))
		cout<<"Y(x) = "<<B[0]<<" + "<<B[1]<<"x"<<endl<<endl;
	if((B[1]>0)&&(B[0]==0))
		cout<<" +"<<B[1]<<"x"<<endl<<endl;
	if((B[1]<0)&&(B[0]!=0))
		cout<<"Y(x) = "<<B[0]<<" "<<B[1]<<"x"<<endl<<endl;
	if((B[1]<0)&&(B[0]==0))
		cout<<" "<<B[1]<<"x"<<endl<<endl;
	for (i = 0; i < 2; i++){
		delete [] XT[i];
		delete [] XTX[i];
		delete [] XTX_inv[i];
	}
	for(i = 0; i< n_elem ; i++)
		delete [] X[i];
	delete [] X;
	delete [] XT;
	delete [] XTX_inv;
	delete [] XTX;
	delete [] XTY;
	delete [] Y;
	delete [] B;
	return 0;
}
