#include "Livro.hpp"
using std::string;


class Livroinv:public Livro{
    public:
    Livroinv(string titulo, int ano, int numero_paginas, string conteudo):Livro(titulo, ano, numero_paginas, conteudo){


    }
    string ler()const override{
        return " ";
    }

};







