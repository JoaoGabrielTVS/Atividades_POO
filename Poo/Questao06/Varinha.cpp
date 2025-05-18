#include "Varinha.hpp"

// Construtor
Varinha::Varinha(std::string tipo_madeira, std::string Nucleo, float tamanho) {
    this->setmadeira(tipo_madeira);
    this->setNucleo(Nucleo);
    this->settamanho(tamanho);
}

// Método display
void Varinha::display() {
    std::cout << "O tipo de madeira é: " << tipo_madeira << std::endl;
    std::cout << "O núcleo é: " << Nucleo << std::endl;
    std::cout << "O tamanho é: " << tamanho << " cm" << std::endl;
}
