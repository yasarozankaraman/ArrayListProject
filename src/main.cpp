/**
* @file main.cpp
* @description ve bu sonucu txt dosyasina yazmamýzý saðlayan main kaynak dosyasi
* @course 1.Öðretim B Grubu
* @assignment 1.ÖDEV
* @date 04.08.2022
* @author Yaþar Ozan KARAMAN
*/
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include "ArrayList.hpp"

using namespace std;

void multiply(int x, ArrayList* res);

int rakamlariToplami(int temp){
    int result =0;
    while(temp != 0){
        auto kalan = temp % 10;
        temp = temp / 10;
        result += kalan;
    }
    return result;
}

ArrayList* factorial(int n)
{
    
    ArrayList* res = new ArrayList(500);

    res->add(1);

    for (int x=2; x<=n; x++)
    {
        auto toplam = rakamlariToplami(x);
        multiply(toplam, res);
    }

    return res;
}

void multiply(int before, ArrayList* res)
{
    int carry = 0;

    for (int i=0; i< res->size(); i++)
    {
        int prod = res->elementAt(i) * before + carry;
        res->removeAt(i);
        res->insert(i, prod % 10);
        carry  = prod/10;  
    }

    while (carry)
    {
        res->add(carry%10);
        carry = carry/10;
    }
}

/*void write_result_to_file(ArrayList* list, string file_name){
    ofstream result_file;
    result_file.open("Sonuc.txt");
     for (int i = list->size()- 1; i >= 0; i--)
        result_file << list->elementAt(i);

    result_file.flush();
    result_file.close();   
}*/

int main()
{
    int num = 0;
    cout << "Sayi giriniz: ";
    cin >> num;

    ArrayList* result_list = factorial(num);
    ofstream result_file;
    result_file.open("Sonuc.txt");

    for (int i = result_list->size()- 1; i >= 0; i--)
        result_file << result_list->elementAt(i);


    result_file.flush();
    result_file.close();
    free(result_list);
    return 0;
}
