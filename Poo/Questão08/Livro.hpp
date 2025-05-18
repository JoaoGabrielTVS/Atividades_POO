#include <iostream>
#include <string>
#include <format>
#pragma once
using std::string;
class Livro {
public:
    Livro(const std::string titulo, int ano, int numero_de_paginas, const std::string conteudo){


    }

    string settitulo(string titulo){
        this->titulo = titulo;
    }
    int setano(int ano){
        this->ano =ano;


    }

    int setnumero_de_paginas(int numero_de_paginas){
        this->numero_de_paginas = numero_de_paginas;

    }
    string setconteudo (string conteudo){
        this->conteudo = conteudo;

    }


    virtual string ler() const {
        return std::format("Titulo: {}\nAno: {}\nNumero de paginas: {}\nConteudo: {}",
                           titulo, ano, numero_de_paginas, conteudo);
    }

    
    
    
    virtual ~Livro() = default;



private:   
    std::string titulo;
    int ano;
    int numero_de_paginas;
    std::string conteudo;
};