#ifndef VetorDinam
#define VetorDinam
#include<stdlib.h>
#include <iostream>
using namespace std;
class VetorDinamico{
public:
        int *vet,tam,i;
	VetorDinamico(int _tam){
	i=0;tam=_tam;vet=(int*)malloc(sizeof(int)*_tam);
	}
	void adiciona(int dado){
	int *aux;
		if(i<tam)
			vet[i]=dado;
		else{
			aux=(int*)malloc(sizeof(int)*(tam+4));
			for(i=0;i<tam;i++)
				aux[i]=vet[i];
			free(vet);
			tam=tam+4;
			vet=aux;
			vet[i]=dado;
		}
		i=i+1;
	}
	int qtdDados(){
		return i;
	}
	int getDado(int i){
		 return vet[i];
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
