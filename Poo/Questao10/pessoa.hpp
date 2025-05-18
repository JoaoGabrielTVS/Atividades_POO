#include <string>
#include <iostream>
#pragma once
using std::string;
class pessoa{
    public:
    pessoa(string nome , string cpf, string cpfvalido);

    void setnome(string nome){
        Nome = nome;
    }
    
    void setcpf(string cpf){
        Cpf = cpf;
    }
    void setcpfvalido(string cpfvalido){
        Cpfvalido = cpfvalido;
    }

    string getnome()const{
        return Nome;

    }
    string getcpf()const{
        return Cpf;

    }
    string getCpfvalido()const{
        return Cpfvalido;
    }

    string apresentar()const;
    
    private:
    string Nome;
    string Cpf;
    string Cpfvalido;


};