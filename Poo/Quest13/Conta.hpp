#include <iostream>
#include <string>
#include <vector>
using std::string, std::cout, std::endl;

class Conta{
    public:
    Conta(int numero, string nome , float saldo):numero(numero), nome(nome), saldo(saldo){

        


    }

    void deposito(string data,float valor, string descricao = " "){
        saldo+=valor;
        settransacao(data,valor,descricao);
    }
    

    virtual void retirada(string data,float valor, string descricao = " "){
        saldo -= valor;
        settransacao(data,-valor,descricao);
    };  
    
    virtual void impressao_extrato() = 0;
     void settransacao(string data, float valor, string descricao){
            this->data.push_back(data);
            this->valor.push_back(valor);
            this->descricao.push_back(descricao);}
   


    


  


    protected:
        int numero;
        string nome;
        float saldo;
        std::vector<string> data;
        std::vector<float> valor;
        std::vector<string> descricao;
       
    };