#include <iostream>
#include "Zoologico.hxx"
#include "Genero.hxx"
#include "Animal.hxx"
#include <stdlib.h>

void imprimirMenu()
{
  cout<<"----------------------------"<<endl;
  cout<<"Seleccione una de las siguientes opciones: "<<endl;
  cout<<"1. Insertar genero al Zoologico"<<endl;
  cout<<"2. Insertar animal al Zoologico"<<endl;
  cout<<"3. Eliminar animal del Zoologico"<<endl;
  cout<<"4. Contar los animales que estan en el Zoologico"<<endl;
  cout<<"5. Buscar existecia de un animal"<<endl;
  cout<<"0. Salir"<<endl;
  cout<<"----------------------------"<<endl;
}

using namespace std;

int main()
{
    int opc;
    string generoCrear;
    string animalCrear;
    string nGenero;
    string nAnimal;
    int cantidad;
    int total;
    bool encontro;
    list<Genero> lZoo;
    Zoologico zoo = Zoologico("PUJ Zoo", lZoo);
    cout<<"Bienvenido a "<<zoo.getNombreZoo()<<endl;
    imprimirMenu();
    cin>>opc;
    system("PAUSE");
    system("cls");

    while(opc != 0)
    {
      switch (opc) {
        case 1:
        cout<<"Ingrese el nombre del genero a insertar"<<endl;
        cin>>generoCrear;
        zoo.insertarGenero(generoCrear);
        system("PAUSE");
        system("cls");
        break;

        case 2:
        zoo.mostrarGeneros();
        cout<<endl;
        cout<<"En inserte el nombre del genero en el que desea insertar"<<endl;
        cin>>nGenero;
        zoo.mostrarAnimalesZ(nGenero);
        cout<<endl;
        cout<<"Ingrese el nombre del animal a insertar"<<endl;
        cin>>animalCrear;
        zoo.insertarAnimal(nGenero, animalCrear);
        system("PAUSE");
        system("cls");
        break;

        case 3:
        zoo.mostrarGeneros();
        cout<<endl;
        cout<<"Ingrese el nombre del genero del cual desea eliminar"<<endl;
        cin>>nGenero;
        zoo.mostrarAnimalesZ(nGenero);
        cout<<"Ingrese el nombre del animal a eliminar"<<endl;
        cin>>nAnimal;
        zoo.eliminarAnimal(nGenero, nAnimal);
        system("PAUSE");
        system("cls");

        break;

        case 4:
        total = zoo.contarAnimales();
        cout<<"La cantidad de animales en el Zoologico es de: "<<total<<endl;
        system("PAUSE");
        system("cls");
        break;

        case 5:
        zoo.mostrarGeneros();
        cout<<endl;
        cout<<"Ingrese en que genero desea indagar la existencia"<<endl;
        cin>>nGenero;
        cout<<"Ingrese el nombre del animal a buscar"<<endl;
        cin>>nAnimal;
        encontro = zoo.buscarAnimal(nGenero,nAnimal);
        if(encontro == true)
        {
          cout<<"El animal si existe"<<endl;
        }else{
          cout<<"El animal no existe"<<endl;
        }
        system("PAUSE");
        system("cls");
        break;

        default:
        cout<<"Opcion no valida"<<endl;
        system("PAUSE");
        system("cls");
        break;

      }
      imprimirMenu();
      cin>>opc;
      system("PAUSE");
      system("cls");

    }


}
