#include <string>
#include "PessoaJ.hpp"
#include <iostream>
#include <vector>
#include "Cliente.hpp"
#include "Funcionario.hpp"
#pragma once
using std::string, std::vector;
class Empresa:public PessoaJ{
    public:
    Empresa(string cnpj, string razao_social, string nome_fantasma):PessoaJ(cnpj,razao_social,nome_fantasma){

    }

    void Adicionarclientes(Cliente cliente){
        this->clientes.push_back(cliente);

    }
    void Removercliente(Cliente cliente){
        
        
        for(int i =0; i < clientes.size(); i++){
            if(clientes[i].getcpf() == cliente.getcpf()){
                clientes.erase(clientes.begin()+i);
            }
        }
    }
     void Adicionarfuncionario(Funcionario funcionario){
        this->funcionarios.push_back(funcionario);

    }
    void Removerfuncionario(Funcionario funcionario){
        
        
        for(int i =0; i < funcionarios.size(); i++){
            if(funcionarios[i].getcpf() == funcionario.getcpf()){
                funcionarios.erase(funcionarios.begin()+i);
            }
        }
    }
     void Imprimirfuncionario(){
        
        
        for(int i =0; i < funcionarios.size(); i++){
            cout<<funcionarios[i].getnome_pessoa();
            cout<<funcionarios[i].getsalario();
            cout<<funcionarios[i].getmatricula();
            
        }
    }
    void Imprimirfuncionario(std::ostream& out){
        
        
        for(int i =0; i < funcionarios.size(); i++){
            out<<funcionarios[i].getnome_pessoa();
            out<<funcionarios[i].getsalario();
            out<<funcionarios[i].getmatricula();

            
        }
    }

    void Imprimircliente(std::ostream& out)const{
            
            for(int i =0; i < clientes.size(); i++){
                out<<clientes[i].getnome_pessoa();
                out<<clientes[i].getcpf();
        }



    }
    void Imprimircliente()const{
            
            for(int i =0; i < clientes.size(); i++){
                cout<<clientes[i].getnome_pessoa()<<endl;
                cout<<clientes[i].getcpf()<<endl;
        }
        }


    float CalcularFolhadePagamento(){
        float valor = 0.0f;
        
        for(int i =0; i < funcionarios.size(); i++){
            valor += funcionarios[i].Calcula_Salario_Bruto();

            
        }
        return valor;
    }
    friend ostream& operator<<(ostream& out, const Empresa& p);

    
    
    
    protected:
    vector<Cliente>clientes;
    vector<Funcionario>funcionarios;


};

ostream& operator<<(ostream& out,  Empresa& p) {
    out<< "CNPJ:"    << p.getcnpj()<<std::endl;
    out<< "Razao Social:" << p.getrazao_social()<<std::endl;
    out<< "Nome Fantasia:" << p.getnome_pessoa()<<std::endl;

    out<<"Lista De Clientes"<<endl;
    p.Imprimircliente(out);
    cout<< " " << endl;

    out<<"Lista De Funcionarios"<<endl;
    p.Imprimirfuncionario(out);

    return out;



}



