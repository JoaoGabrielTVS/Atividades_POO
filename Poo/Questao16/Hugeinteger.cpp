#include <iostream>
#include <string>
#include <array>
#include <format>
#include "Hugeinterger.hpp"
 Hugeinterger::Hugeinterger(std::array<char,40> array){
    input(array);
    }

    
   void Hugeinterger::input(std::array<char,40> array){
        int pos = sizeof(array)/sizeof(array[0]);
        for(int i=0; i<pos;i++){
          Array[i] = array[i];
        
        }

    }
    void Hugeinterger::output()const{
        
        for(char i:Array){
              if(i>=48 && i<=57)  
                std::cout << i;

        }

    }

    bool Hugeinterger::isEqualTo(std::array<char,40> array){
        if(array == Array){
            return true;
        }else{
            return false;
        }

    }
    bool Hugeinterger::isNotEqualTo(std::array<char,40> array){
        if(array != Array){
            return true;
        }else{
            return false;
        }

    }
    bool Hugeinterger::isGreaterthan(std::array<char,40> array){
            if(conversao_para_inteiro(array) > conversao_para_inteiro(Array))
                return true;
            else
                return false;

    }
    bool Hugeinterger::isLessThan(std::array<char,40> array){
        if(conversao_para_inteiro(array) < conversao_para_inteiro(Array))
                return true;
            else
                return false;
    }
    bool Hugeinterger::isGreaterThanOriqual(std::array<char,40> array){
        if(conversao_para_inteiro(array) >= conversao_para_inteiro(Array))
                return true;
            else
                return false;
    }
    bool Hugeinterger::isLessThanOrIqual(std::array<char,40> array){
        if(conversao_para_inteiro(array) <= conversao_para_inteiro(Array))
                return true;
            else
                return false;
    }


    void Hugeinterger::add(std::array<char,40> array){
              int resultado = conversao_para_inteiro(array) + conversao_para_inteiro(Array);
            std::string resultado_string = std::to_string(resultado);
            for(int i = 0; i<resultado_string.size();i++)
                if(resultado_string[i]>=48 && resultado_string[i]<=57)  
                    Array[i] = resultado_string[i];
            
            
           
            
            
    }


