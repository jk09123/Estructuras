#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
  private:
    string nombreAnimal;
    int cantidad;
  public:
    Animal(string aNombreAnimal, int aCantidad);
    void setNombreA(string aNombreAnimal);
    void setCantidad(int aCantidad);
    string getNombreA();
    int getCantidad();
};
#include "Animal.hxx"

#endif //ANIMAL_HXX
