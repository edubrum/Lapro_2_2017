#include "Ponto.h"

Ponto::Ponto(int a, int b)
{
    x = a;
    y = b;
}
void Ponto::setPonto(int a,int b)
{
    x = a;
    y = b;
}
void Ponto::getPonto(int &a,int &b)
{
    a = x;
    b = y;
}

