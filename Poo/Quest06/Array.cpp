#include <iostream>
#include <array>
using std::cerr, std::endl;

#include "Array.hpp"

ostream &operator<<(ostream &out , const Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    out << a.arr[i] << " ";
  
  out << endl;

  return out;
}
Array Array::operator+=(const Array &array){
    int novoTamanho = this->tam + array.tam;
    int *novoArray = new int[novoTamanho];

    for (int i = 0; i < this->tam; i++) {
        novoArray[i] = this->arr[i];
    }

    // Adicione os elementos do outro array
    for (int i = 0; i < array.tam; i++) {
        novoArray[this->tam + i] = array.arr[i];
    }

    // Libere a memória antiga
    delete[] this->arr;

    // Atualize os atributos
    this->arr = novoArray;
    this->tam = novoTamanho;

    // Retorne o próprio objeto modificado
    return *this;
}
istream &operator>>(istream &inp , Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    inp >> a.arr[i];
  
  return inp;
}

Array::Array(int tam)
{
  this->tam = (tam > 0 ? tam : 10);

  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = 0;
}

Array::Array(const Array &obj) : tam(obj.tam)
{
  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = obj.arr[i];
}

Array::~Array()
{
  delete [] arr;
}

int Array::getSize() const
{
  return tam;
}

const Array &Array::operator=(const Array &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tam != obj.tam)
    {
      delete [] this->arr;
      this->tam = obj.tam;
      this->arr = new int[this->tam];
    }

    for (int i = 0 ; i < this->tam ; i++)
      arr[i] = obj.arr[i];

  }

  return *this;
}

bool Array::operator==(const Array &obj) const
{
  if (this->tam != obj.tam)
    return false;

  for (int i = 0 ; i < this->tam ; i++)
    if (arr[i] != obj.arr[i])
      return false;
  
  return true;
}

int &Array::operator[](int i)
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

int Array::operator[](int i) const
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}


Array operator+(const Array &array, const Array &array2){
    Array resposta;
    
        int i;
        
        for(i = 0; i<array.tam; i++){
                
                resposta.arr[i] = array.arr[i];
                
        }
        for(i;i<(array.getSize()+array.getSize());i++){
            resposta.arr[i] = array2.arr[i];

        }
    
    return resposta;

}