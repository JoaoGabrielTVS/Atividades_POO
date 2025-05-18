#include <iostream>
#include "Viratempo.hpp"

int main(){
    Viratempo vt(5);
    vt.mostrarTempo();//1

    vt.avancarTempo();
    

    vt.mostrarTempo();//2
    vt.virarTempo();
    vt.avancarTempo();
    vt.mostrarTempo();//3
    vt.virarTempo();
    for (int i = 0; i < 6; i++){
        vt.avancarTempo();
        vt.mostrarTempo();
    }
    vt.virarTempo();
    for (int i = 0; i < 7; i++){
        vt.avancarTempo();
        vt.mostrarTempo();
    }
    
    return 0;



    
}



