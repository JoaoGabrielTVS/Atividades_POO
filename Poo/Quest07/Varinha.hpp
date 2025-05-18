#include <iostream>
#include <string>
#pragma once
using std::string;
class Varinha {
public:
    Varinha(const string& madeira = "", const string& nucleo = "", float comprimento = 0.0f)
        : tipoMadeira(madeira), nucleo(nucleo), comprimento(comprimento) {}

    void setTipoMadeira(const string& madeira) {
        tipoMadeira = madeira;
    }

    void setNucleo(const string& novoNucleo) {
        nucleo = novoNucleo;
    }

    void setComprimento(float novoComprimento) {
        comprimento = novoComprimento;
    }

    string getTipoMadeira() const {
        return tipoMadeira;
    }

    string getNucleo() const {
        return nucleo;
    }

    float getComprimento() const {
        return comprimento;
    }

    string display() const {
        return std::format("Varinha - Madeira: {}, Núcleo: {}, Comprimento: {} cm", tipoMadeira, nucleo, comprimento);
    }

private:
    string tipoMadeira;
    string nucleo;
    float comprimento;
};