#include "Humano.hpp"
#include "Bruxo.hpp"
#include <vector>
#include <iostream>
#include <string>
#pragma once
using namespace std;
class Expresso{
    public:
    Expresso(const int limite);
    
    void operator<<(const Bruxo &bruxo);//ja coloco atraves de objeto
    void operator>>(const Bruxo &bruxo);                  //remove de acordo com o nome
    void operator>>(const string &nome);                                    //remove de acordo com o objeto
    friend ostream &operator<<(ostream &out ,const Expresso expresso);//printa na tela
    private:
    const int limite;
    vector <Bruxo> bancos;






};