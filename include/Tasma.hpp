/**
* @file Tasma.hpp
* @description Tasma oldugunda kullaniciya hata mesajý fýrlatan baslik dosyasi
* @course 1.Öðretim B Grubu
* @assignment 1.ÖDEV
* @date 04.08.2022
* @author Yaþar Ozan KARAMAN
*/
#ifndef TASMA_HPP
#define TASMA_HPP

#include "Hata.hpp"

class Tasma : public Hata{
	public:
		Tasma(const string &msg):Hata(msg) { }
};
#endif

