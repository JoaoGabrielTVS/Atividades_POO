#include <iostream>
#include <string>
#include "Capa.hpp"
using std::string, std::cout, std::endl;

CapaBruxo::CapaBruxo(string cor, string casa,float tamanho= 0):Tamanho(tamanho){
    setcasa(casa);
    setcor(cor);
}

void CapaBruxo::Display()const{
    cout << "O tamanho é :" << Tamanho << endl;
    cout << "A Casa é :" << casa << endl;
    cout << "A cor é :" << cor << endl;
}








