#include"VetorDinamico.h"
#include<iostream>
using namespace std;
int main(void)
{

    VetorDinamico V1(5);
    int dado;

    do{
        cin >> dado;
        if (dado>0)
            V1.adiciona(dado);
        else break;
    } while (1);

    for(int i=0; i< V1.qtdDados(); i++)
    {
        cout << V1.getDado(i) << endl;
    }
	return 0;
}


