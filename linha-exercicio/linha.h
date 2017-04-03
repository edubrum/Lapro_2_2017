#ifndef _LINHA_

#define _LINHA_

#include "Ponto.h"

class Linha{
    int Pi, Pf;
    Ponto *PPi, *PPf;

public:
    Linha(int Pi, int Pf);
    Linha (Ponto *PPi,Ponto *PPf);
    void imprime();
    void getLinha(int &Pi, int &Pf);

};
#endif
