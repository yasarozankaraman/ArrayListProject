/**
* @file ElemanYok.hpp
* @description Elaman�n olmad��� zaman hata mesaj�n� f�rlatan ba�l�k dosyas�
* @course 1.��retim B Grubu
* @assignment 1.�DEV
* @date 04.08.2022
* @author Ya�ar Ozan KARAMAN
*/
#ifndef ELEMANYOK_HPP
#define ELEMANYOK_HPP

#include "Hata.hpp"

class ElemanYok : public Hata{
	public:
		ElemanYok(const string &msg):Hata(msg) { }
};
#endif
