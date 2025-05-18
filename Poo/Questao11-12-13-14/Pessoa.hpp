#include <string>
#include <iostream>
#pragma once
using std::string;
using namespace std;
class Pessoa{
    public:
        Pessoa(string nome_pessoa): nome_pessoa(nome_pessoa){

        }
        void setnome_pessoa(string nome_pessoa){
            this->nome_pessoa = nome_pessoa;

        } 
        string getnome_pessoa()const{
            return this->nome_pessoa;
        }
        

    protected:

        string nome_pessoa;

    friend ostream& operator<<(ostream& out, const Pessoa& p);



};


ostream& operator<<(ostream& out, const Pessoa& p) {
    out << "(" << p.getnome_pessoa() << ")"; // Formata a saída
    return out;
}









