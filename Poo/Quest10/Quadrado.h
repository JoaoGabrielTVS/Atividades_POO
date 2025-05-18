#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
public:
  Quadrado(float lado) : FormaBidimensional(4), lado(lado) {}

  virtual void desenhar() {
    cout << "+---+" << endl;
    cout << "|   |" << endl;
    cout << "+---+" << endl;
  }
  float calcular_area()const override{
        return (lado * lado);
  }
  float calcular_perimetro()const override{
        return 4*lado;
  }
  private:
    float lado;


};

#endif