#include <iostream>
#include <string>
#include <format>
#include "Capa.hpp"
#include "Varinha.hpp"
#include "Bruxo.hpp"
#include "Humano.hpp"
#include "Trouxa.hpp"
#include "Expresso.hpp"
using std::string, std::cout, std::endl;



int main() {
    Expresso expresso(10);
    Varinha varinha("Teixo", "Corda de Coração de Dragão", 30.0f);
    CapaBruxo capa("Preta", "Grifinoria", 120.0f);
    
    Bruxo bruxo("Harry", "Grifinória", "Expelliarmus");
    bruxo.setVarinha(varinha);
    bruxo.setCapa(capa);
    expresso << bruxo;

    

    cout << expresso;

   


    return 0;
}

