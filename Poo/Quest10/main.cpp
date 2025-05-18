#include <iostream>

#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
 
int main() {
	//FormaBidimensional fd(2); // ERRO!!!!  

  // FormaBidimensional *p; // o ponteiro pode existir
	FormaBidimensional *formas[] = {
		new Quadrado(2), new Circulo(2), new Triangulo(2.5,5.5)};

	for (int i = 0; i < 3; i++) {
		formas[i]->desenhar();
		delete formas[i];
	}
    Quadrado quadrado = Quadrado(5.0f);
    Triangulo triangulo = Triangulo(2.0f,5.0f);
    Circulo circulo = Circulo(2.5f);


    std::cout << triangulo.calcular_area()<<std::endl;
    std::cout << circulo.calcular_perimetro()<<std::endl;




	return 0;
}