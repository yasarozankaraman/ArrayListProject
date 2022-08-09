/**
* @file Hata.hpp
* @description Kullaniciya hata fýrlatan baþlýk dosyasý
* @course 1.Öðretim B Grubu
* @assignment 1.ÖDEV
* @date 04.08.2022
* @author Yaþar Ozan KARAMAN
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
