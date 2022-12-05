#pragma once
#include <string>

class Nodo
{
public:
    Nodo(std::string nombre);
    ~Nodo();
    void AgregarHijo(Nodo* hijo);
    std::string GetNombre();
    Nodo* GetPrimerHijo();
    Nodo* GetSiguiente();
    uint8_t GetProfundidad();
private:
    Nodo* _primerHijo;
    Nodo* _ultimoHijo;
    Nodo* _siguiente;
    std::string _nombre;
    uint8_t _profundidad;
};