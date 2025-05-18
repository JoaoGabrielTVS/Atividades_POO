#include "Imovel.hpp"
using std::string;

class ImovelNovo:public Imovel{
    public:
        ImovelNovo(string endereco, float preco,float add):Imovel(endereco, preco),add(add){
            

        }
        void setadd(float add){
            this->add = add;
        }
        float detadd()const{
            return add;
        }
        float getPreco()const{
            return (preco+add);
        }

    private:
        float add;
};







