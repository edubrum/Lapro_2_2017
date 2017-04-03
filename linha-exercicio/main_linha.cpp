#include <iostream>

#include "Ponto.h"

#include "Linha.h"

using namespace std;


/*
void imprimeLinha(int P1, int P2)
{
    cout << "Linha de ";
    VetorDePontos[P1].imprime();
    cout << " ate ";
    VetorDePontos[P2].imprime();
    cout << endl;
}
*/
int main()
{
    Ponto VetorDePontos[] =
    { Ponto(1,3), Ponto(), Ponto(11,-3), Ponto(5,131), Ponto(10,30) };

    cout << "Tam do int: " << sizeof(int);
    cout << "  Tam do Ponto: " << sizeof(Ponto);
    cout << "  Tam do Vetor: " << sizeof(VetorDePontos);
    cout << endl;
    int N = sizeof(VetorDePontos) / sizeof(Ponto);
    for (int i=0; i< N; i++)
    {
        VetorDePontos[i].imprime();
        cout << endl;
    }

    //Linha L1(2,0);
    Linha L1(&VetorDePontos[2],&VetorDePontos[0]);
    cout << "LINHA: ";
    L1.imprime();

    /*
    int P1,P2;
    Ponto A,B;
    L1.getLinha(P1,P2);
    A = VetorDePontos[P1];
    B = VetorDePontos[P2];
    A.imprime();
    B.imprime();
    //imprimeLinha(P1,P2);
    */

    return 0;
}
