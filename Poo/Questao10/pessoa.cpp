#include <format>
#include <iostream>
#include <string>
#include "pessoa.hpp"
pessoa::pessoa(string nome , string cpf="", string cpfvalido="")
{
    pessoa::setnome(nome);
    pessoa::setcpf(cpf);
    pessoa::setcpfvalido(cpfvalido);
}

string pessoa::apresentar()const{
    return std::format("O nome he {} o cpf {} {}",getnome(),getcpf(),getCpfvalido());

}


