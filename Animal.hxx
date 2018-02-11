#ifndef ANIMAL_HXX
#define ANIMAL_HXX
#include "Animal.h"

using namespace std;

    Animal::Animal(string aNombreAnimal, int aCantidad){
      this->nombreAnimal = aNombreAnimal;
      this->cantidad = aCantidad;
    }

    void Animal::setNombreA(string aNombreAnimal)
    {
      this->nombreAnimal = aNombreAnimal;
    }
    void Animal::setCantidad(int aCantidad)
    {
      this->cantidad = aCantidad;
    }
    string Animal::getNombreA(){return this->nombreAnimal;}
    int Animal::getCantidad(){return this->cantidad;}

#endif
