#ifndef _televisao_h_
#define _televisao_h_
#include<iostream>
using namespace std;
class Televisao{
	private:
		int volume,canal;
	public:
		Televisao();
		void set_volume(int _volume);
		void set_canal(int _canal);
		int  get_volume();
		int get_canal();
		void aumentar_volume();
		void diminuir_volume();
		void aumentar_canal();
		void diminuir_canal();
		void sel_aum_canal(int _can);
		void sel_dim_canal(int _can);
};
#endif
