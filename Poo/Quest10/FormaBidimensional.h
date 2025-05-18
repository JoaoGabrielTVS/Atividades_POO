#ifndef FORMABI_H
#define FORMABI_H 

//classe abstrata

class FormaBidimensional 
{
public:
  FormaBidimensional(int numLados) : numLados(numLados) { }

  //método virtual puro
  virtual void desenhar() = 0;
  virtual float calcular_area()const = 0;
  virtual float calcular_perimetro()const=0;
  
protected:
  int numLados;
};

#endif