#include <iostream>
#include <string>
#include <format>
#pragma once
using std::string;




class Humano{
    public:
    Humano(string nome):nome(nome){
        
    }
     void setnome(const string& nome) {
        this->nome = nome;
    }

    string getnome() const {
        return nome;
    }
    private:
    string nome;
};