#include "PessoaF.hpp"
#include "PessoaJ.hpp"
#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Empresa.hpp"


int main(){
    PessoaF pessoa1 = PessoaF("Joao", "111.2222.333-09");
    //std::cout<< pessoa1<<std::endl;
    Cliente cliente1 = Cliente("ana","11111111",322332323,"rua2");
    //std::cout<< cliente1<<std::endl;
    Funcionario funcionario1 = Funcionario("Laura","00000000","1111-11",1000.5f,10.0f,7.0f);
    //std::cout<< funcionario1<<std::endl;
    Empresa empresa = Empresa("111-1111","2222222","Empresajo");
    empresa.Adicionarclientes(cliente1);
    empresa.Adicionarfuncionario(funcionario1);
    cout << empresa << endl;
}


























