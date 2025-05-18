#include <iostream>
#include <string>
#pragma once

using std::cout , std::endl, std::cin, std::string;


class  Animal{
    public:
    Animal(string nome){
        setnome(nome);
    }

    virtual string caminha()const{
        return " ";
    }
    void setnome(string nome){
        this->nome = nome;
    }

    string getnome()const{
        return nome;
    }


    private:
    string nome;
    string raca;
};




