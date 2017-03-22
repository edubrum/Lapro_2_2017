#include <iostream>
#include "Agenda.h"
#include"Pessoa.h"
using namespace std;
int main () {
    char linha[] = "------------------------------------------------\n";
    Agenda A;
    A.armazena_pessoa("Abel", 22, 1.78);
    A.armazena_pessoa("Tiago", 20, 1.80);
    A.imprime_povo();
    cout << linha;
    int posicao = A.busca_pessoa("Tiago");
    if (posicao > 0)
        A.imprime_pessoa(posicao);
    cout << linha;
    A.remove_pessoa("Tiago");
    A.imprime_povo();
    cout << linha;
    return 0;
}
