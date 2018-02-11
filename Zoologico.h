#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H

#include "Genero.h"
#include <list>
using namespace std;

class Zoologico
{
  private:
  string nombreZoo;
  list<Genero> zoo;

  public:
    Zoologico(string nNombreZoo, list<Genero> nZoo);
    string getNombreZoo();
    void setNombreZoo(string aNombreZoo);
    void insertarGenero(string nGenero);
    void insertarAnimal(string nGenero, string nAnimal);
    void eliminarAnimal(string nGenero, string nAnimal);
    int contarAnimales();
    bool buscarAnimal(string nGenero, string nAnimal);
    void mostrarGeneros();
    void mostrarAnimalesZ(string nGenero);

};
#include "Zoologico.hxx"
#endif
