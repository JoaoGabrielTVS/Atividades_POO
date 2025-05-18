#include <string>
#include "Humano.hpp"

#pragma once
class Trouxa:public Humano{
    public:
    Trouxa(string nome, string profissao):Humano(nome),profissao(profissao){

    }
    private:
    string profissao;
};





