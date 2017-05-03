
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;

using std::ofstream; // output file stream
using std::ifstream; // input file stream

using namespace std;


int main()
{
  // cria um objeto da classe  'ifstream'
  ifstream arquivoDeEntrada;
  //char S[100];
  string S;
  
  // Abre um arquivo para leitura 
  arquivoDeEntrada.open ("Dados.txt", ios::in);
  
  if (!arquivoDeEntrada)
  {
      cout << "Problemas na abertura do arquivo" << endl;
      exit(1);
  }
  
  
     // o uso de >> na leitura de arquivos texto
     // usa o espaço em branco e o ENTER como 
     // marcadores de fim da entrada.
     
//  arquivoDeEntrada >> S;  // lê uma palavra
//  cout << S;
//  arquivoDeEntrada >> S;
//  cout << S;
//  arquivoDeEntrada.close();
    
   
	float TotalGasto=0.00;
   while (!arquivoDeEntrada.eof())
   {
	string Nome;
	float Preco,Qtd;
     // le uma linha inteira do arquivo 
     // sem pegar o '\n'    
     arquivoDeEntrada>>Nome;
     arquivoDeEntrada>>Preco;
     arquivoDeEntrada>>Qtd;
	//arquivoDeEntrada>>S; --lê uma palavra apenas
	if(!arquivoDeEntrada.eof()){
     		cout <<"Fruta:"<< Nome << endl;
		cout <<"Preço:"<< Preco << endl;
		cout <<"Quantidade:"<< Qtd << endl;
	TotalGasto+=Preco*Qtd;
   	}
   }
	cout<<"Total gasto: "<<TotalGasto<<endl;
     arquivoDeEntrada.close();
  return 0;
}

