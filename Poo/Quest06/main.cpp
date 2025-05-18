#include <iostream>
#include <string>
#include "Array.hpp"
using namespace std;


int main(){

     Array a1(7);  //array de 7 elementos
  Array a2(7);     //array de 10 elementos

  cout << "Entre com 7 elementos: ";
  
  cin >> a1;    //lendo array 

  cout << "Printando a1: ";
  cout << a1;   //escrevendo array
  cout << "Entre com 7 elementos: ";
  
  cin >> a2;    //lendo array 
/*
  cout << "Printando a1: ";
  cout << a2;   //escrevendo array

  cout << a2+a1;
  */
  a1+=a2;
  
  cout << a1;


  return 0;
}




