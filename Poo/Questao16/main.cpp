#include <iostream>
#include <string>
#include <array>
#include <format>
#include "Hugeinterger.hpp"


int main(){
    std::array<char, 40> k ={'5','0','0','0','1','1'};
    std::array<char, 40> g ={'2','5','0','0'};

    Hugeinterger h = Hugeinterger(k);
    h.add(g);
    h.output();
    std::cout<<" "<<std::endl;
    
    std::cout<< h.isEqualTo(g)<<std::endl;
    std::cout<< h.isNotEqualTo(g)<<std::endl;
    std::cout<< h.isGreaterthan(g)<<std::endl;//">"
    std::cout<< h.isGreaterThanOriqual(g)<<std::endl;//">="
    std::cout<< h.isLessThan(g)<<std::endl;//"<"
    std::cout<< h.isLessThanOrIqual(g)<<std::endl;//"<="
    



}























