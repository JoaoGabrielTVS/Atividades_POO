#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
public:
  Circulo(float raio) : FormaBidimensional(99999),raio(raio){}

  virtual void desenhar() {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  - " << endl;
  }
    float calcular_area() const override{
        return ((raio*raio) * 3.14f);
        }
    float calcular_perimetro() const override{
            return (2*raio * 3.14f);

    }
  private:
  float raio;
};

#endif