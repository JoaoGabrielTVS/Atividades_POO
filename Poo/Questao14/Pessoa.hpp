#include <string>
#include <iostream>
#pragma once
using std::string;
class pessoa{
    public:
    pessoa(string nome , string cpf);

    void setnome(string nome){
        Nome = nome;
    }
    
    void setcpf(string cpf);
    

    string getnome()const{
        return Nome;

    }
    string getcpf()const{
        return Cpf;

    }
   

    string apresentar()const;
    
    private:
    string Nome;
    string Cpf;
    bool Cpfvalido;


};