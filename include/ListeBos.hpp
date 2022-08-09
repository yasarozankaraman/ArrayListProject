/**
* @file ListeBos.hpp
* @description Liste Bos oldugunda kullaniciya hata mesajý firlatan baslik dosyasi 
* @course 1.Öðretim B Grubu
* @assignment 1.ÖDEV
* @date 04.08.2022
* @author Yaþar Ozan KARAMAN
*/
#ifndef LISTEBOS_HPP
#define LISTEBOS_HPP

#include "Hata.hpp"

class ListeBos : public Hata{
	public:
		ListeBos(const string &msg):Hata(msg) { }
};
#endif
