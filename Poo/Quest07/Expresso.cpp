#include "Expresso.hpp"
#include "Bruxo.hpp"

#include <string>

Expresso::Expresso(int limite):limite(limite){

}
void Expresso::operator<<(const Bruxo &bruxo){
    if(bancos.size()<limite)
        this->bancos.push_back(bruxo);
    
}

ostream &operator<<(ostream &out ,const Expresso expresso){//pegamos o cout do nome 
    for(Bruxo bruxo:expresso.bancos){
        out << bruxo.getnome()<<" ";

    }
    return out;

}
void Expresso::operator>>(const Bruxo &bruxo){
    for(int i = 0; i<bancos.size();i++){
        if(bancos[i].getnome() == bruxo.getnome()){
            bancos.erase(bancos.begin()+i);
        }
    }




};


                  //remove de acordo com o nome
void Expresso::operator>>(const string &nome){
        for(int i = 0; i<bancos.size();i++){
        if(bancos[i].getnome() == nome){
            bancos.erase(bancos.begin()+i);
        }
    }

};   



















