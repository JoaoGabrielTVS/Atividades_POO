#include <iostream>
#include <string>
#include <format>
#include "Capa.hpp"
#include "Varinha.hpp"
#include "Humano.hpp"
#pragma once
using std::string, std::cout, std::endl;
class Bruxo:public Humano{
public:
    Bruxo(const string& nome = "", const string& casa = "", const string& feitico = "")
        : Humano(nome),Nome(nome), Casa(casa), Feitico(feitico) {}

   

    void setcasa(const string& casa) {
        if (casa == "sonserina" || casa == "Grifinória" || casa == "Corvinal" || casa == "lufa-lufa")
            Casa = casa;
        else
            Casa = " ";
    }

    void setfeitico(const string& feitico) {
        Feitico = feitico;
    }

    void setVarinha(const Varinha& novaVarinha) {
        varinha = novaVarinha;
    }

    void setCapa(const CapaBruxo& novaCapa) {
        capa = novaCapa;
    }


    string getcasa() const {
        return Casa;
    }

    string getfeitico() const {
        return Feitico;
    }

    string display() const {
        return std::format(
            "Bruxo - Nome: {}, Casa: {}, Feitiço: {}\n{}\n{}",
            Nome, Casa, Feitico, varinha.display(), capa.display()
        );
    }

private:
    string Nome;
    string Casa;
    string Feitico;
    Varinha varinha;
    CapaBruxo capa;
};