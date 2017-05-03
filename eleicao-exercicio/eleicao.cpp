#include<string>
#include<iostream>
#include<cstdlib>
#include<fstream>
#include"candidato.h"
using  std::ofstream;
using std::ifstream;
using namespace std;
void le_lista_cand(Candidato Eleicao[],int n_candidatos,string nome_arquivo){
	ifstream arq;
	arq.open(nome_arquivo.c_str(),ios::in);
	if(!arq){
		cout<<"Problemas na abertura do arquivo"<<nome_arquivo<<endl;
	}
	n_candidatos=0;
	while(!arq.eof()){
		string nome;
		getline(arq,nome);
		if(arq.eof()){
			break;
		cout<<"Candidato: "<<nome<<endl;
		n_candidatos++;
		}
	cout<<"Número de candidatos lidos: "<<n_candidatos<<endl;
	arq.close();
	}
}
void imprime_candidatos(Candidato Eleicao,int n_cnadidatos){

}
void le_urna(Candidato Eleicao,int n_candidatos,string nome_arquivo){
/*	ifstream arq;
	arq.open(nome_arquivo.c_str().ios::in){
	if(!arq){
		cout<<"Problemas na abertura do arquivo"<<nome_arquivo<<endl;
	}
	while(!arq.eof()){
		int num;
		nome_arquivo>>num;
		if(num){
*/
}
void imprime_resultado(Candidato Eleicao,int n_candidatos){

}
int main(void){
	Candidato Eleicao[10];
	int n_candidatos;
	string nome_arquivo;
	le_lista_cand(Eleicao,n_candidatos,"candidatos.txt");
/*	impmrime_candidatos(Eleicao,n_candidatos);
	le_urna(Eleicao,n_candidatos,"urna1.txt");
	le_urna(Eleicao,n_candidatos,"urna2.txt");
	le_urna(Eleicao,n_candidatos,"urna3.txt");
	le_urna(Eleicao,n-candidatos,"urna4.txt');
	imprime_resultado(Eleicao,n_candidatos);
*/	return 0;
}
