#include <string>
#include <iostream>
#pragma once

class Varinha {
public:
    Varinha(std::string tipo_madeira, std::string Nucleo, float tamanho);
    
    inline void setmadeira(std::string madeira) { this->tipo_madeira = madeira; }
    inline void setNucleo(std::string Nucleo) { this->Nucleo = Nucleo; }
    inline void settamanho(float tamanho) { this->tamanho = tamanho; }
    inline std::string getmadeira() const { return tipo_madeira; }
    inline std::string getNucleo() const { return Nucleo; }
    inline float gettamanho() const { return tamanho; }
    
    void display();

private:
    std::string tipo_madeira;
    std::string Nucleo;
    float tamanho;
};
