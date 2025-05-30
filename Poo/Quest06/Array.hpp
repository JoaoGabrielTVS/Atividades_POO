#pragma once

#include <iostream>
using std::ostream, std::istream;

class Array
{
  // cout << obj << cout
  friend ostream &operator<<( ostream &, const Array &);

  // cin >> obj
  friend istream &operator>>( istream &, Array &);
public:
  Array( int = 10 );    //construtor-padrão
  Array(const Array &); //construtor de cópia
  ~Array();             //destrutor

  int getSize() const;

  
  const Array &operator=( const Array & ); //operador atribuição. "const Array &" evita algo como (a = b) = c

  bool operator==( const Array & ) const; //operador de igualdade

  bool operator!=( const Array &dir) const
  {
    return !(*this == dir);
  }
  
  
  int &operator[](int); //permite modificar o elemento
  Array operator+=(const Array &array);
  int operator[](int) const; //não permite modificar o elemento
    friend Array operator+(const Array &array,const Array &array2);
private:
  int tam;
  int *arr;
};

