#include"pessoa.h"
#include<iostream>
#include<string>
using namespace std;
int main(void){
    Pessoa p;
    float _altura;
    int _idade;
    string _nome;
    cout<<"Digite sua altura, sua idade e seu nome:"<<endl;
    cin>>_altura;
    cin>>_idade;
    cin>>_nome;
    p.set(_altura,_idade,_nome);
    cout<<"Seu nome é:"<<p.get_nome()<<endl;
    cout<<"Sua idade é:"<<p.get_idade()<<endl;
    cout<<"Sua altura é:"<<p.get_altura()<<endl;
    return 0;
}
