


#include <iostream>
#include <string>
#include <array>
#include <format>
#pragma once
using namespace std;

class Hugeinterger{
    public:
    Hugeinterger(string array);
    

    
    void input(string array);
    void output()const;
    

    void operator=(const string array);
  

    void add(string array);
    

            
    private:
    string Array;
    int conversao_para_inteiro(string array){
        std::string numero;
        for (char i : array) {
            if (i == '\0') break; 
            if (i >= '0' && i <= '9') { 
                numero += i;
            }
        }
        return numero.empty() ? 0 : std::stoi(numero); 

        }

};
































