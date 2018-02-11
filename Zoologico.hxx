#ifndef ZOOLOGICO_HXX
#define ZOOLOGICO_HXX
#include <iostream>
#include <list>
#include "Zoologico.h"

using namespace std;

  Zoologico::Zoologico(string nNombreZoo, list<Genero> nZoo)
  {
    nombreZoo = nNombreZoo;
    zoo = nZoo;
  }
  string Zoologico::getNombreZoo(){return this->nombreZoo;}
  void Zoologico::setNombreZoo(string aNombreZoo){this->nombreZoo = aNombreZoo;}
  void Zoologico::insertarGenero(string nGenero)
  {
  bool encontro =false;
  for(list<Genero>::iterator it=zoo.begin(); it!=zoo.end(); it++)
  {
    if(it->getNombreGenero() == nGenero)
    {
      encontro = true;
    }
  }
    if(encontro == false)
    {
      list<Animal> nuevaLista;
      Genero generoInsertar = Genero(nGenero, nuevaLista);
      zoo.push_back(generoInsertar);
      cout<<"Se inserto correctamente el genero "<<nGenero<<endl;
    }else
    {
      cout<<"El genero ya existe"<<endl;
    }

  }
  void Zoologico::insertarAnimal(string nGenero, string nAnimal)
  {
      int cantidad;
      bool encontroG =false;
      for(list<Genero>::iterator it=zoo.begin(); it!=zoo.end(); it++)
      {
        if(it->getNombreGenero() == nGenero)
        {
          encontroG = true;
            cout<<"Ingrese la cantidad de animales que hay"<<endl;
            cin>>cantidad;
            Animal animalInsertar = Animal(nAnimal, cantidad);
            it->insertarAnimal(animalInsertar);
        }
      }
      if(encontroG == false)
    {
      cout<<"El genero no existe"<<endl;
    }

  }
void Zoologico::eliminarAnimal(string nGenero, string nAnimal)
{
  bool encontroG =false;
  for(list<Genero>::iterator it=zoo.begin(); it!=zoo.end(); it++)
  {
    if(it->getNombreGenero() == nGenero)
    {
        encontroG = true;
        it->eliminarAnimal(nAnimal);
    }
  }
  if(encontroG == false)
{
  cout<<"El genero no existe, el animal no fue eliminado"<<endl;
}

}
int Zoologico::contarAnimales()
{
  int cont = 0;
  for(list<Genero>:: iterator itG = zoo.begin(); itG != zoo.end(); itG++)
  {
    cont += itG->contarAnimalesG();
  }
  return cont;
}

bool Zoologico::buscarAnimal(string nGenero,string nAnimal)
{
  bool encontroA =false;
  for(list<Genero>::iterator it=zoo.begin(); it!=zoo.end(); it++)
  {
        if(it->getNombreGenero() == nGenero)
        encontroA = it->buscarAnimalG(nAnimal);
  }
  return encontroA;
}
void Zoologico::mostrarGeneros()
{
  cout<<"Los generos que exiten en el Zoologico son: "<<endl;
  for(list<Genero>::iterator it =zoo.begin(); it != zoo.end(); it++)
  {
    cout<<it->getNombreGenero()<<endl;
  }
}
void Zoologico::mostrarAnimalesZ(string nGenero)
{
  for(list<Genero>::iterator it=zoo.begin(); it!=zoo.end(); it++)
  {
    if(it->getNombreGenero() == nGenero)
    {
      it->mostrarAnimalesG();
    }
  }
}
#endif
