#include <iostream>
#include "Viratempo.hpp"


Viratempo::Viratempo(int n){
    N=n;
    chave = true;
    tick=0;
}
 
void Viratempo::avancarTempo(){
    
    if(chave == true && tick < N)
        tick += 1;
    else if(chave == false && tick > 0)
        tick -= 1;

}
 