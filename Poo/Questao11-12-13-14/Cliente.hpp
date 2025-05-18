#include <string>
#include <iostream>
#include "PessoaF.hpp"
#pragma once
using std::string;
using std::cout, std::endl;

class Cliente:public PessoaF{
    public:
    Cliente(string nome, string cpf, int telefone, string endereco):PessoaF(nome,cpf), endereco(endereco), telefone(telefone){

    }

    void setendereco(string endereco){
        this->endereco = endereco;
    }
    string getendereco()const{
        return this->endereco;
    }
    void settelefone(int telefone){
        this->telefone = telefone;

    }
    int gettelefone()const{
        return this->telefone;
    }
    
    friend ostream& operator<<(ostream& out, const Cliente& p);



    private:
    string endereco;
    int telefone;
    
};






ostream& operator<<(ostream& out, const Cliente& p) {
    out << "("<<"O nome he: " << p.getnome_pessoa() << " O endereco he: "<< p.getendereco()<<" O Telefone he: "<< p.gettelefone()<< " O cpf he: "<<p.getcpf()<<")"; // Formata a saída
    return out;
}