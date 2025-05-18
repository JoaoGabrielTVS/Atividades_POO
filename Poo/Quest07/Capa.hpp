#include <iostream>
#include <string>
#include <format>
#pragma once
using std::string, std::cout, std::endl;

class CapaBruxo {
public:
    CapaBruxo(const string& cor = "", const string& casa = "", float tamanho = 0.0f)
        : cor(cor), casa(casa), Tamanho(tamanho) {}

    void setcor(const string& novaCor) {
        cor = novaCor;
    }

    void setcasa(const string& novaCasa) {
        if (novaCasa == "lufa-lufa" || novaCasa == "corvinal" || novaCasa == "sonserina" || novaCasa == "Grifinoria")
            casa = novaCasa;
        else
            casa = " ";
    }

    void settamanho(float novoTamanho) {
        Tamanho = novoTamanho;
    }

    string getcor() const {
        return cor;
    }

    string getcasa() const {
        return casa;
    }

    float gettamanho() const {
        return Tamanho;
    }

    string display() const {
        return std::format("Capa - Cor: {}, Casa: {}, Tamanho: {} cm", cor, casa, Tamanho);
    }

private:
    string cor;
    string casa;
    float Tamanho;
};