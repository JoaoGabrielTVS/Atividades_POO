#include <iostream>
#include <string>
#include <string>
#pragma once
using std::string;


class Imovel{
    public:
        Imovel(string endereco, float preco):endereco(endereco), preco(preco){

        }
        void SetEndereco(string endereco){
            this->endereco = endereco;
        }
        string GetEndereco()const{
            return this->endereco;
        }
        void setPreco(float preco){
            this->preco =preco;
        }
        virtual float getPreco()const{
            return this->preco;
        }

    protected:
        string endereco;
        float preco;


};






