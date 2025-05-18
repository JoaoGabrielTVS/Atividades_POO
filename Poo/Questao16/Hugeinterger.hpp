#include <iostream>
#include <string>
#include <array>
#include <format>
#pragma once
class Hugeinterger{
    public:
    Hugeinterger(std::array<char,40> array);
    

    
    void input(std::array<char,40> array);
    void output()const;
    

    bool isEqualTo(std::array<char,40> array);
    bool isNotEqualTo(std::array<char,40> array);

    bool isGreaterthan(std::array<char,40> array);

    bool isLessThan(std::array<char,40> array);

    bool isGreaterThanOriqual(std::array<char,40> array);

    bool isLessThanOrIqual(std::array<char,40> array);


    void add(std::array<char,40> array);
    

            
    private:
    std::array<char, 40> Array;
    int conversao_para_inteiro(std::array<char,40> array){
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
