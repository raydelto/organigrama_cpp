#include "Arbol.h"
#include <iostream>

Arbol::Arbol(Nodo* raiz):_raiz(raiz)
{    
}

void Arbol::Recorrer()
{
    Recorrer(_raiz);
}

void Arbol::Recorrer(Nodo* nodo)
{
    for(size_t i = 0; i < nodo->GetProfundidad(); i++)
    {
        std::cout << "\t";
    }
    std::cout << nodo->GetNombre() << std::endl;
    Nodo* i = nodo->GetPrimerHijo();

    while(i != nullptr)
    {
        Recorrer(i);
        i = i->GetSiguiente();
    }
}

Arbol::~Arbol()
{
    std::cout << "Destruyendo arbol" << std::endl;
    delete _raiz;
}