#include <iostream>
#include "ImovelNovo.hpp"
#include "ImovelVelho.hpp"




int main(){
    ImovelNovo imovel1 = ImovelNovo("11/22/09",100000.0,100);
    std::cout<<imovel1.getPreco()<<std::endl;



}