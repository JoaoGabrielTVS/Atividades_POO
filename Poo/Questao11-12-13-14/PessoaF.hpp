#include "Pessoa.hpp"
#include <iostream>
#include <string>
#pragma once
using std::string;




class PessoaF:public Pessoa{
    public:
        PessoaF(string nome_pessoa, string cpf):Pessoa(nome_pessoa),cpf(cpf){
            


        }
        void setcpf(string cpf){
            this->cpf = cpf;

        }
        string getcpf()const{
            return this->cpf;
        }

    private:
        string cpf;


};












