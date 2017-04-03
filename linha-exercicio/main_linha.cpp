#include <iostream>

#include "Ponto.h"

#include "Linha.h"

using namespace std;

Ponto VetorDePontos[] =
    { Ponto(1,3), Ponto(), Ponto(11,-3), Ponto(5,131), Ponto(10,30) };

void imprimeLinha(int P1, int P2)
{
    cout << "Linha de ";
    VetorDePontos[P1].imprime();
    cout << " ate ";
    VetorDePontos[P2].imprime();
    cout << endl;
}

int main()
{
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

    Linha L1(2,0);

    int P1,P2;

    L1.getLinha(P1,P2);
    imprimeLinha(P1,P2);

    return 0;
}
