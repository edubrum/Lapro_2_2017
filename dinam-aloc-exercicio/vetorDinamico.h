#ifndef VetorDinam
#define VetorDinam
#include<stdlib.h>
#include <iostream>
using namespace std;
class VetorDinamico{
public:
        int *vet,*aux,tam,i;
	VetorDinamico(int _tam){
	i=0;tam=_tam;vet=(int*)malloc(sizeof(int)*_tam);
	}
	void adiciona(int dado){
		if(i<=tam)
			vet[i]=dado;
		else{
			aux=(int*)malloc(sizeof(int)*tam);
			for(i=0;i<tam;i++)
				aux[i]=vet[i];
			free(vet);
			tam=tam+1;
			vet=(int*)malloc(sizeof(int)*tam);
			for(i=0;i<tam-1;i++)
				vet[i]=aux[i];
			free(aux);
		}	
		i=i+1;
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
