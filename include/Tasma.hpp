/**
* @file Tasma.hpp
* @description Tasma oldugunda kullaniciya hata mesaj� f�rlatan baslik dosyasi
* @course 1.��retim B Grubu
* @assignment 1.�DEV
* @date 04.08.2022
* @author Ya�ar Ozan KARAMAN
*/
#ifndef TASMA_HPP
#define TASMA_HPP

#include "Hata.hpp"

class Tasma : public Hata{
	public:
		Tasma(const string &msg):Hata(msg) { }
};
#endif

