#include <iostream>
#include <string>
#include <array>
#include <format>
#include "Hugeinterger.hpp"
 Hugeinterger::Hugeinterger(string  array){
    input(array);
    }

    
   void Hugeinterger::input(string array){
        int pos = array.size();
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

    void Hugeinterger::operator=(const string array){
        string resultado{"0"};
        for (char i:array)
            if(i < '0' || i> '9')
                resultado +=i ;
            
        

        this->Array = resultado;
            



        
        this->Array = array;

    }
    


    void Hugeinterger::add(string array){
              int resultado = conversao_para_inteiro(array) + conversao_para_inteiro(Array);
            std::string resultado_string = std::to_string(resultado);
            for(int i = 0; i<resultado_string.size();i++)
                if(resultado_string[i]>=48 && resultado_string[i]<=57)  
                    Array[i] = resultado_string[i];
            
            
           
            
            
    }