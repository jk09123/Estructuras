#ifndef GENERO_H
#define GENERO_H

#include <iostream>
#include <list>
#include "Animal.h"

using namespace std;

class Genero
{
  private:
    string nombreGenero;
    list<Animal> animales;
  public:
    Genero(string aNombreGenero, list<Animal> nAnimales);
    void setNombreGenero(string aNombregenero);
    string getNombreGenero();
    void setAnimales(list<Animal> nAnimales);
    list<Animal> getAnimales();
    void insertarAnimal(Animal nAnimal);
    void eliminarAnimal(string nombreAnimal);
    int contarAnimalesG();
    bool buscarAnimalG(string nAnimal);
    void mostrarAnimalesG();

};
#include "Genero.hxx"

#endif // GENERO_H
