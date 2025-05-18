#include "Pessoa.hpp"
#include <string>
using std::string;
#pragma once


class PessoaJ:public Pessoa{
    public:
        PessoaJ(string cnpj, string razao_social, string nome_fantasma):Pessoa(nome_fantasma), cnpj(cnpj), razao_social(razao_social){

        }
    
    void setrazao_social(string razao_social){
        this->razao_social = razao_social;
        
    }
    string getrazao_social(){
        return this->razao_social;
    }
    void setcnpg(string cnpj){
        this->cnpj = cnpj;
    }
    string getcnpj(){
        return this->cnpj;
    }
    
    private:
    string cnpj;
    string razao_social;




};


