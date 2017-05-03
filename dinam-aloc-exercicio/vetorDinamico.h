#ifndef VetorDinam
#define VetorDinam
#include<stdlib.h>
#include <iostream>
using namespace std;
class VetorDinamico{
public:
        int dado,*vet,,*aux,i,j;
	VetorDinamico(int a){
	i=0;dado=0;j=a;vet=(int*)malloc(sizeof(int)*a);
	}
	void adiciona(int dado){
		for(i=0;i<=j;i++){
			vet[i]=dado;
		}
		if(j==i){
			aux=(int*)malloc(sizeof(int)*j);
			for(i=0;i<=j;i++){
				aux[i]=vet[i];
			}
			free(vet);
			vet=(int*)malloc(sizeof(int)*(i+4));
			for(i=0;i<=j;i++){
				vet[i]=aux[i];
			}
			j=sizeof(vet);
			free(aux);
		}
	}
	int qtdDados(){
		return sizeof(vet);
	}
	int getDado(int i){
		 return this->vet[i];
	}
	// Métodos a serem criados
        // - construtora: deve alocar o vetor com um tamnho inicial, passado
        // como parâmetro.
        // - adiciona: coloca um dado no vetor. Se noa houver
        // mais espaço, deve alocar um novo vetor
        // - qtdDados: deve informar o número de dados inseridos no vetor
        // - getDado(i): deve informar o valor do dado 'i'
};
#endif
