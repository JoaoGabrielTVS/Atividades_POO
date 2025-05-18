#include <iostream>
#include <vector>
#pragma once
using namespace std;

class IntegerSet {
private:
    int set[100] = {0}; // Array de 100 posições, todas inicializadas com 0

public:
    // Construtor padrão (conjunto vazio)
    IntegerSet();

    // Construtor com array de inteiros
    IntegerSet(const int arr[], int size);

    // Método para inserir um elemento no conjunto
    void insertElement(int k);

    // Método para deletar um elemento do conjunto
    void deleteElement(int k);

    // Método para imprimir os elementos do conjunto
    void print() const;

    // Função friend para união de dois conjuntos
    friend IntegerSet unionOfSets(const IntegerSet& set1, const IntegerSet& set2);

    // Função friend para interseção de dois conjuntos
    friend IntegerSet intersectionOfSets(const IntegerSet& set1, const IntegerSet& set2);
};

