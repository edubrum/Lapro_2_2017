#include <iostream>
using namespace std;

#include "Linha.h"

Linha::Linha(int Pi, int Pf)
{
    this->Pi = Pi;
    this->Pf = Pf;
}

void Linha::imprime()
{
    cout << "Linha de " << Pi << " ate " << Pf << endl;
   // PPi->imprime();
}

void Linha::getLinha(int &Pi, int &Pf)
{
    Pi = this->Pi;
    Pf = this->Pf;
}
