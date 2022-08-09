/**
* @file ArrayList.cpp
* @description ArrayList fonksiyonlarinin bulundugu kaynak dosyasi
* @course 1.Öðretim B Grubu
* @assignment 1.ÖDEV
* @date 04.08.2022
* @author Yaþar Ozan KARAMAN
*/
#include "ArrayList.hpp"
#include "ElemanYok.hpp"
#include "ListeBos.hpp"
#include "Tasma.hpp"

#define NOT_FOUND_INDEX -1;

void ArrayList::reserve(int newCapacity)
{
        if(capacity>=newCapacity) return; // O kadar yer zaten var
        int *tmp = new int[newCapacity];
        for(int j=0;j<length;j++) tmp[j]= items[j];
        if(items != NULL) delete [] items;
        items = tmp;
        capacity = newCapacity;
}

ArrayList::ArrayList() 
{
    length = 0;
    capacity=0;
    items = NULL;
}

ArrayList::ArrayList(int capacity) 
{
    length = 0;
    this->capacity=capacity;
    items = new int[capacity];
    initWithZero();
}

void ArrayList::initWithZero()
{
    for(int i = 0; i < capacity; i++){
        items[i] = 0;
    }
}

int ArrayList::size() const
{
    return length;
}
bool ArrayList::isEmpty() const
{
    return size() == 0;
}
int ArrayList::indexOf(const int& item) const
{
    for(int i=0;i<length;i++){
        if(items[i] == item)return i;
    }
    return NOT_FOUND_INDEX;
}
const int& ArrayList::elementAt(int i) const
{
    if(i<0 || i>=length) exit(1);
    return items[i]; 
}
void ArrayList::remove(const int& item)
{
    for(int i=0;i<length;i++){
        if(items[i] == item){
            removeAt(i);
            return;
        }
    }
    
}
void ArrayList::removeAt(int i)
{
    if(i<0 || i>=length) exit(1);
    for(int j=i+1;j<length;j++) items[j - 1] = items[j];
    length--;
}
void ArrayList::add(const int& yeni)
{			
    insert(length,yeni);				
}
void ArrayList::insert(int i,const int& yeni)
{
    if(i<0 || i>length) exit(2);
    if(length >= capacity) reserve(max(1,2*capacity)); //Yer yoksa 2 kat yer acar.
    for(int j=length-1;j>=i;j--) items[j + 1] = items[j];
    items[i] = yeni;
    length++;					
}
const int& ArrayList::first() const
{
    if(length == 0) exit(3);
    return items[0];
}
const int& ArrayList::last() const{
    if(length == 0) exit(3);
    return items[length-1];
}
void ArrayList::clear()
{
    length = 0;
}

ArrayList::~ArrayList()
{
    if(items != NULL) delete [] items;
}
