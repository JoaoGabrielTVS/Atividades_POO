#include "Animal.hpp"

#include <string>

using std::string;
class Cachorro:public Animal{
    public:
    string caminha()const override{
        return "Andando";
    }
    
    private:






};

