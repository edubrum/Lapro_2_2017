#ifndef _pessoa_h_
#define _pessoa_h_
#include<iostream>
#include<string> 
using namespace std;   
    class Pessoa{
        private:
            float altura;
            int idade;
            string nome;
        public:
            Pessoa();
            void set(float _altura,int _idade,string _nome);
            float get_altura();
            int get_idade();
            string get_nome();
};
#endif
