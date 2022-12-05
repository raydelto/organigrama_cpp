#include "Nodo.h"
#include <iostream>

Nodo::Nodo(std::string nombre) : _nombre(nombre),
                                 _primerHijo(nullptr),
                                 _ultimoHijo(nullptr),
                                 _siguiente(nullptr),
                                 _profundidad(0)
{
    std::cout << "Está naciendo el nodo " << _nombre << std::endl;
}

Nodo::~Nodo()
{
    std::cout << "Está destruyéndose el nodo " << _nombre << std::endl;

    Nodo* i = _primerHijo;

    while(i != nullptr)
    {
        Nodo* tmp = i->_siguiente;
        delete i;
        i = tmp;
    }
}

void Nodo::AgregarHijo(Nodo *hijo)
{
    hijo->_profundidad = _profundidad + 1;
    if (_primerHijo == nullptr) // La lista está vacía
    {
        _primerHijo = hijo;
    }
    else
    {
        _ultimoHijo->_siguiente = hijo;
    }

    _ultimoHijo = hijo;
}

std::string Nodo::GetNombre()
{
    return _nombre;
}

Nodo *Nodo::GetPrimerHijo()
{
    return _primerHijo;
}

Nodo *Nodo::GetSiguiente()
{
    return _siguiente;
}

uint8_t Nodo::GetProfundidad()
{
    return _profundidad;
}