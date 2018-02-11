#ifndef GENERO_HXX
#define GENERO_HXX

#include "Genero.h"


using namespace std;

    Genero::Genero(string aNombreGenero, list<Animal> nAnimales)
    {
      nombreGenero = aNombreGenero;
      animales = nAnimales;
    }
    void Genero::setNombreGenero(string aNombreGenero){this->nombreGenero=aNombreGenero;}
    string Genero::getNombreGenero(){return this->nombreGenero;}
    void Genero::setAnimales(list<Animal> nAnimales){this->animales = nAnimales;}
    list<Animal> Genero::getAnimales(){return this->animales;}

    void Genero::insertarAnimal(Animal nAnimal)
    {
      bool encontro = false;
      for(list<Animal>::iterator it = animales.begin(); it != animales.end(); it++)
      {
        if(it->getNombreA()== nAnimal.getNombreA())
        encontro  = true;
      }
      if(encontro == false)
      {
      animales.push_back(nAnimal);
      cout<<"Se inserto el animal "<<nAnimal.getNombreA()<<endl;
      }else{
      cout<<"El animal ya existe"<<endl;
      }
    }
    void Genero::eliminarAnimal(string cNombreAnimal)
    {
      bool encontro = false;
      for(list<Animal>::iterator it = animales.begin(); it != animales.end(); it++)
      {
        if(it->getNombreA() == cNombreAnimal){
        encontro  = true;
        animales.erase(it);
        }
      }
      if(encontro == false)
      {
      cout<<"No se encontro el animal "<<cNombreAnimal<<endl;
      }else{
      cout<<"Se elimino correctamente el animal"<<endl;
      }
    }

    int Genero::contarAnimalesG()
    {
        int cantidad = 0;
        list<Animal>::iterator it = animales.begin();
        while (it != animales.end()) {
            cantidad = cantidad + it->getCantidad();
            it++;
        }
        return cantidad;

    }

      bool Genero::buscarAnimalG(string nAnimal)
      {
        bool encontro = false;
        for(list<Animal>::iterator it = animales.begin(); it != animales.end(); it++)
        {
          if(it->getNombreA() == nAnimal){
          encontro  = true;
          }
        }
          return encontro;
    }

    void Genero::mostrarAnimalesG()
    {
      cout<<"Los animales que hay en el genero "<<getNombreGenero()<<" son:"<<endl;
      for(list<Animal>::iterator it = animales.begin(); it != animales.end(); it++)
      {
        cout<<it->getNombreA()<<endl;
      }

    }
#endif // GENERO_HXX
