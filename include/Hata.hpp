/**
* @file Hata.hpp
* @description Kullaniciya hata f�rlatan ba�l�k dosyas�
* @course 1.��retim B Grubu
* @assignment 1.�DEV
* @date 04.08.2022
* @author Ya�ar Ozan KARAMAN
*/

#ifndef HATA_HPP
#define HATA_HPP

#include <iostream>
using namespace std;

class Hata{
	private:
		string mesaj;
	public:
		Hata(const string &msg):mesaj(msg) { }
		string Mesaj();
};
#endif
