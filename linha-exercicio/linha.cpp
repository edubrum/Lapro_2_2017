#include <iostream>
using namespace std;

#include "Linha.h"

Linha::Linha(int Pi, int Pf)
{
    this->Pi = Pi;
    this->Pf = Pf;
}
Linha::Linha (Ponto *PPi,Ponto *PPf)
{
    this->PPi = PPi;
    this->PPf = PPf;
}

void Linha::imprime()
{
   // cout << "Linha de " << Pi << " ate " << Pf << endl;
    PPi->imprime();
    cout << "  -  ";
    PPf->imprime();
}

void Linha::getLinha(int &Pi, int &Pf)
{
    Pi = this->Pi;
    Pf = this->Pf;
}
