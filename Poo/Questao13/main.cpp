#include <iostream>
using std::cout, std::endl;

#include "Time.hpp"

int main() {
	Time t;

	cout << "Objeto t: ";
	cout << t.toUniversal() << endl;
  
  cout << t.toUniversal() << endl;

/*
	Time outroTime;

	cout << "Objeto outroTime criado: ";
	cout << outroTime.toUniversal() << endl;

	outroTime = t;  //cada atributo de t C) copiado para o respectivo atributo de outroTime

	cout << "Objeto outroTime pC3s atribuiC'C#o: ";
	cout << outroTime.toUniversal() << endl;

	outroTime.setTime(13,0,0);

	cout << "Objeto outroTime pC3s setTime 13 0 0: ";
	cout << outroTime.toUniversal() << endl;

	cout << "Objeto t original: ";
	cout << t.toUniversal() << endl;

	return 0;
*/
}