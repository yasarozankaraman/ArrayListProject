/**
* @file ElemanYok.hpp
* @description Elamanýn olmadýðý zaman hata mesajýný fýrlatan baþlýk dosyasý
* @course 1.Öðretim B Grubu
* @assignment 1.ÖDEV
* @date 04.08.2022
* @author Yaþar Ozan KARAMAN
*/
#ifndef ELEMANYOK_HPP
#define ELEMANYOK_HPP

#include "Hata.hpp"

class ElemanYok : public Hata{
	public:
		ElemanYok(const string &msg):Hata(msg) { }
};
#endif
