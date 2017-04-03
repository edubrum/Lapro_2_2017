#ifndef _PONTO_

#define _PONTO_

#include <iostream>
using namespace std;

class Ponto
{
    int x,y;
public:
    Ponto()
    {
        x=0;
        y=0;
    }
    Ponto(int a, int b);
    void setPonto(int a,int b);
    void getPonto(int &a,int &b);
    void imprime()
    {
        cout << "(" << x << "," << y << ")";
    }
};

#endif // _XYZ_
