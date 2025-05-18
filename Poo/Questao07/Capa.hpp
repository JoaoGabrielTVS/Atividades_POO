#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
class CapaBruxo{
    public:
    CapaBruxo(string cor, string casa,float tamanho);
    void setcasa(string casa){
        if(casa == "lufa-lufa" || casa == "corvinal" || casa == "sonserina" || casa == "Grifinoria")
            this->casa = casa;
        else
            this->casa = " ";

    }
    void setcor(string cor){
        this->cor = cor;
    }
    void settamanho(float tamanho){
        this->Tamanho = tamanho;
    }
    void Display()const;
    
    private:
    float Tamanho;
    string cor;
    string casa;


};