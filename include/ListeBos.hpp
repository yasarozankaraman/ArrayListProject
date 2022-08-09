/**
* @file ListeBos.hpp
* @description Liste Bos oldugunda kullaniciya hata mesaj� firlatan baslik dosyasi 
* @course 1.��retim B Grubu
* @assignment 1.�DEV
* @date 04.08.2022
* @author Ya�ar Ozan KARAMAN
*/
#ifndef LISTEBOS_HPP
#define LISTEBOS_HPP

#include "Hata.hpp"

class ListeBos : public Hata{
	public:
		ListeBos(const string &msg):Hata(msg) { }
};
#endif
