#pragma once

#include "Nodo.h"

class Arbol
{
public:
    Arbol(Nodo* raiz);
    ~Arbol();
    void Recorrer();
    void Recorrer(Nodo* nodo);
private:
    Nodo* _raiz;
};