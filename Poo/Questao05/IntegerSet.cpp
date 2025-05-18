#include "Integerset.hpp"
using namespace std;
IntegerSet::IntegerSet(){

}
IntegerSet::IntegerSet(const int arr[], int size){
    for (int i = 0; i < size; ++i) {
            if (arr[i] >= 0 && arr[i] < 100) {
                set[arr[i]] = 1; // Marca o elemento presente no conjunto
            }
        }
}
void IntegerSet::insertElement(int k){
    if (k >= 0 && k < 100) {
            set[k] = 1;
        }
}

void IntegerSet::deleteElement(int k){
    if (k >= 0 && k < 100) {
            set[k] = 0;
        }
}

    // Método para imprimir os elementos do conjunto
void IntegerSet::print() const{
    bool isFirst = true;
        for (int i = 0; i < 100; ++i) {
            if (set[i] == 1) {
                if (!isFirst) cout << " "; // Para não imprimir espaço antes do primeiro número
                cout << i;
                isFirst = false;
            }
        }
        cout << endl;
}



// Função friend para união de dois conjuntos
IntegerSet unionOfSets(const IntegerSet& set1, const IntegerSet& set2){
    IntegerSet result;
    for (int i = 0; i < 100; ++i) {
        if (set1.set[i] == 1 || set2.set[i] == 1) {
            result.set[i] = 1;
        }
    }
    return result;
}

// Função friend para interseção de dois conjuntos
IntegerSet intersectionOfSets(const IntegerSet& set1, const IntegerSet& set2){
    IntegerSet result;
    for (int i = 0; i < 100; ++i) {
        if (set1.set[i] == 1 && set2.set[i] == 1) {
            result.set[i] = 1;
        }
    }
    return result;

};



















