#include <cstdlib>
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;

using std::ofstream; // output file stream
using std::ifstream; // input file stream

using namespace std;


int main()
{
  // cria um objeto da classe  'ofstream'
  ofstream arquivoDeSaida;
  
  // Abre um arquivo para escrita 
  // e destrói o arquivo se ele existir
  arquivoDeSaida.open ("Cadastro.txt", ios::out);
  
  if (!arquivoDeSaida)
  {
      cout << "Problemas na abertura do arquivo" << endl;
      exit(1);
  }
  
  arquivoDeSaida << "Teste de gravação" << endl;
  arquivoDeSaida << ".... linha 2" << endl;
  arquivoDeSaida << ".... linha 3" << endl;
  arquivoDeSaida << "Última linha!" << endl;
  arquivoDeSaida.close();

  // Abre um arquivo para escrita 
  // e passa a gravar ao final dele.
  arquivoDeSaida.open ("Cadastro.txt", ios::app);
  
  if (!arquivoDeSaida)
  {
      cout << "Problemas na abertura do arquivo" << endl;
      exit(1);
  }
  arquivoDeSaida << "Mais uma linha..." << endl;
  arquivoDeSaida.close();
  return 0;
}



