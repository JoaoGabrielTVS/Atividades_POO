#include <string>
#include <vector>
#include <iostream>


class Retangulo{
    public:
    Retangulo(float altura=1.0, float largura=1.0){
        setaltura(altura);
        setlargura(largura);

    }
    void setaltura(float altura){
        (altura>0.0 && altura <20.0?(Altura =altura):Altura = 1.0);
        
    }
    void setlargura(float largura){
            (largura>0.0 && largura <20.0?(Largura =largura):Largura = 1.0);


    }




    float getaltura()const{
        return Altura;
    }
    float getlargura()const{
        return Largura;
    }
    float perimetro(){
    
        return(getaltura()*2+getlargura()*2);


    }
    float area(int numero=0){
        return(getaltura()*getlargura());
    }
    void Desenho(){
                 int const linha = static_cast<int>(getaltura());
        int const coluna = static_cast<int>(getlargura());

        for (int i = 0; i < linha; i++) {
            for (int x = 0; x < coluna; x++) {
                if (i == 0 || i == linha - 1) {
                    std::cout << "-";
                } else {
                    if (x == 0 || x == coluna - 1)
                        std::cout << "|";
                    else
                        std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    
        
    }
  
    private:
    float Altura;
    float Largura;



};