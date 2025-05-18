#include "Livroinv.hpp"
#include "Livromonstro.hpp" 
#include "Livro.hpp"

using std::string;

int main(){
Livroinv livro1= Livroinv("O hobit",1999,300,"conteu.....");
Livromonstro livro2 =Livromonstro("O hobit",1999,300,"conteu.....");
Livro *livro1p {&livro1};
Livro *livro2p {&livro2};


std::cout << livro1p->ler();
std::cout << livro2p->ler();



}