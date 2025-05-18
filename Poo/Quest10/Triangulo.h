#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
public:
  Triangulo(float base , float altura) : FormaBidimensional(3),base(base),altura(altura) {}

  virtual void desenhar() {
    cout << "   .    " << endl;
    cout << "  / \\  " << endl;
    cout << " /   \\ " << endl;
    cout << "/_____\\" << endl;
  }

  float calcular_area() const override{
        return ((base*altura)/2);
  }
  float calcular_perimetro() const override{
        return (3*base);
  }
  private:
  float base;
  float altura;
};

#endif