#include <iostream>
#include <vector>
#include "Integerset.hpp"
using namespace std;


int main() {
    // Testando a classe IntegerSet

    int arr1[] = {1, 5, 7, 10};
    IntegerSet set1(arr1, 4);

    int arr2[] = {3, 5, 7, 15};
    IntegerSet set2(arr2, 4);

    cout << "Conjunto 1: ";
    set1.print();

    cout << "Conjunto 2: ";
    set2.print();

    // União dos conjuntos
    IntegerSet unionSet = unionOfSets(set1, set2);
    cout << "União dos conjuntos: ";
    unionSet.print();

    // Interseção dos conjuntos
    IntegerSet intersectionSet = intersectionOfSets(set1, set2);
    cout << "Interseção dos conjuntos: ";
    intersectionSet.print();

    return 0;
}








