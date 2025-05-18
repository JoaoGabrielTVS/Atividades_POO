#include <format>
#include <iostream>
#include <string>
#include "Pessoa.hpp"
pessoa::pessoa(string nome , string cpf)
{
    pessoa::setnome(nome);
    pessoa::setcpf(cpf);
}
void pessoa::setcpf(std::string cpf){
    int tick = 10;
    int soma = 0;
    for(int i=0; i < cpf.size();i++){
        if(cpf[i] == '-' || tick <2)
            break;
        if(cpf[i] != '.'){

            soma += (cpf[i]-'0') *tick;
            tick--;
        }
    

    }
    
    tick = 11;
    if(((soma*10)%11 == (cpf[12]-'0')) || ((soma*10)%11 == 10 && (cpf[12]-'0')== 0)){
        soma = 0;
        for(int i=0; i < 13;i++){
            if(tick <2)
                break;
            if(cpf[i] != '.' && cpf[i] != '-'){

                soma += (cpf[i]-'0') *tick;
                tick--;
            }

        }
        if(((soma*10)%11 == (cpf[13]-'0')) || ((soma*10)%11 == 10 && (cpf[13]-'0')== 0)){
            Cpfvalido = true;
        }
        else
            Cpfvalido = false;

    
    }
    else
        Cpfvalido = false;
        
    

    
    Cpf = cpf;
}

string pessoa::apresentar()const{
    return std::format("O nome he {} o cpf {} validade{}",getnome(),getcpf(), Cpfvalido);

}


