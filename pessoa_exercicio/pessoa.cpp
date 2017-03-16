#include"pessoa.h"
#include<iostream>
#include<string>
using namespace std;
    Pessoa::Pessoa(){
        altura=0.0;idade=0;nome="nenhum";
    }

    void Pessoa::set(float _altura,int _idade,string _nome){
        altura=_altura;idade=_idade;nome=_nome;
    }
    float Pessoa::get_altura(){
        return altura;
    }
    int Pessoa::get_idade(){
        return idade;
    }
    string Pessoa::get_nome(){
        return nome;
    }
