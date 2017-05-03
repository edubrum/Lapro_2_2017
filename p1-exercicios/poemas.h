#ifndef _poemas_
#define _poemas_
#include<string>
class Poemas{
	private:
		string frase[5];
		int i;
	public:
		Poemas();
		int insere(string s);
		int remove(string s);
};
#endif
