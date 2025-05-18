#include <string>
#include <iostream>
#include <format>
#pragma once
class Viratempo{
    public:
    Viratempo(int n);
    void mostrarTempo(){
        std::cout<< tick<<std::endl;
    }
    void avancarTempo();
    void virarTempo(){
        chave = !chave;
    }
    

    
    
    
    
    private:
    int N;
    int tick;
    bool chave;



};