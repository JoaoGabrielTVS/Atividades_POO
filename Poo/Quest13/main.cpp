#include <iostream>
#include <string>
#include <format>
#include <vector>
#include <tuple>
using std::string;

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
    
      



class Corrente_Comum:Conta{
    
    public:
    Corrente_Comum(int numero, string nome , float saldo):Conta(numero, nome, saldo)
    {

    }

    void impressao_extrato() override{
        std::cout<< std::format("numero da conta: {} , nome do cliente {},Saldo {}",numero, nome, saldo)<<std::endl;
        std::cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<std::endl;
        std::cout<<"Transacoes:"<<std::endl;

        for(int i = 0; i<data.size();i++){
            std::cout << std::format("Data: {} , Valor: {} , Descricao: {}", data[i], valor[i], descricao[i])<<std::endl; 
        }        
        std::cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<std::endl;


    }






};

class Corrente_Limite: public Conta{
    public:
    Corrente_Limite(int numero, string nome , float saldo, float limite ):Conta(numero, nome, saldo), limite(limite)
    {

    }
    void retirada(string data, float valor, string descricao) override{
        if((saldo-valor) >= limite){
            saldo -= valor;
            settransacao(data,-valor,descricao);
        }else
            std::cout << "voce não tem limite para essa operação"<<std::endl;
    }
        void impressao_extrato() override{
        std::cout<< std::format("numero da conta: {} , nome do cliente: {},Saldo: {}, Limite:{}",numero, nome, saldo,limite)<<std::endl;
        std::cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<std::endl;
        std::cout<<"Transacoes:"<<std::endl;

        for(int i = 0; i<data.size();i++){
            std::cout << std::format("Data: {} , Valor: {} , Descricao: {}", data[i], valor[i], descricao[i])<<std::endl; 
        }        
        std::cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<std::endl;


    }


    private:
    float limite;
};

class Poupança:public Conta{
    public:
    Poupança(int numero, string nome , float saldo,int Aniversario):Conta(numero, nome, saldo), Aniversario(Aniversario){}

        void impressao_extrato() override{
        std::cout<< std::format("numero da conta: {} , nome do cliente: {},Saldo: {}, Dia Do Aniversario: {}",numero, nome, saldo,Aniversario)<<std::endl;
        std::cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<std::endl;
        std::cout<<"Transacoes:"<<std::endl;

        for(int i = 0; i<data.size();i++){
            std::cout << std::format("Data: {} , Valor: {} , Descricao: {}", data[i], valor[i], descricao[i])<<std::endl; 
        }
        std::cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<std::endl;
        


    }
    
    private:
    int Aniversario;


};










int main(){
Conta *conta1= new Corrente_Limite(11111,"joao",100.19f, 1000.50);
conta1->deposito("11/12/3005", 10.0f, "pizza");

conta1->impressao_extrato();









}