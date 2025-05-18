#include "Livro.hpp"
using std::string;


class Livroinv:Livro{
    Livroinv(string titulo, int ano, int numero_paginas, string conteudo):Livro(titulo, ano, numero_paginas, conteudo){


    }
    string ler()const override{
        return " ";
    }

};







