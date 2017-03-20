#include"televisao.h"
#include<iostream>
using namespace std;
		Televisao::Televisao(){
			canal=volume=0;
		}
		void Televisao::set_volume(int _volume){
			volume=_volume;
		}
		void Televisao::set_canal(int _canal){
			canal=_canal;
		}
		int Televisao::get_volume(){
			return volume;
		}
		int Televisao::get_canal(){
			return canal;
		}
		void Televisao::aumentar_volume(){
			volume=volume+1;
		}
		void Televisao::diminuir_volume(){
			volume=volume-1;
		}
		void Televisao::aumentar_canal(){
			canal=canal+1;
		}
		void Televisao::diminuir_canal(){
			canal=canal-1;
		}
		void Televisao::sel_aum_canal(int _can){
			if(_can>canal){
				canal=_can;
			}
			else{
				cout<<"Isira um val0or maior que o atual"<<endl;
			}
		}
		void Televisao::sel_dim_canal(int _can){
			if(_can<canal){
				canal=_can;
			}
			else{
				cout<<"Insira um valor menor que o atual"<<endl;
			}
		}
