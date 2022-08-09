/**
* @file ArrayList.hpp
* @description ArrayList in baþlýk dosyasý
* @course 1.Öðretim B Grubu
* @assignment 1.ÖDEV
* @date 04.08.2022
* @author Yaþar Ozan KARAMAN
*/
#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

#include "ElemanYok.hpp"
#include "ListeBos.hpp"
#include "Tasma.hpp"

class ArrayList{
	private:
		int *items;
		int length;
		int capacity;
		void reserve(int newCapacity);
		void initWithZero();
	public:
		ArrayList();
		ArrayList(int capacity);
		//ArrayList(ArrayList &right);
		int size() const;
		bool isEmpty() const;
		int indexOf(const int& item) const;
		const int& elementAt(int i) const;
		void remove(const int& item);
		void removeAt(int i);
		void add(const int& yeni);
		void insert(int i,const int& yeni);
		const int& first() const;
		const int& last() const;
		void clear();
		//friend ostream& operator<<(ostream& screen, ArrayList& right);
		~ArrayList();
};

#endif
