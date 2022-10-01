/*Ejercicio 1: Hacer un programa para agregar números enteros a una pila, hasta que el usuario lo decida, 
después mostrar todos los números introducidos en la pila.*/
#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void pedirDatos(Nodo *&pila, int num);
void quitarDatos(Nodo *&pila, int &num);

int main()
{
    Nodo *pila = NULL;
    int num, nElementos;

    cout<<"Tamanio de la Pila: ";
    cin>>nElementos;
    for(int i=0;i<nElementos;i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>num;
        pedirDatos(pila, num);
    }
    cout<<"Elementos de la pila: "<<endl;
    while(pila != NULL)
    {
        quitarDatos(pila, num);
        if(pila != NULL)
        {
            cout<<num<<", ";
        }
        else
        {
            cout<<num<<".";
        }
    }


    return 0;
}
void pedirDatos(Nodo *&pila, int num)
{
    Nodo *nuevo_nodo = new Nodo ();
    nuevo_nodo->dato = num;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout<<"Elemento "<<num<<", agregado exitosamente . . ."<<endl<<endl;
}
void quitarDatos(Nodo *&pila, int &num)
{
    Nodo *aux = pila;
    num = aux->dato;
    pila = aux->siguiente;
    delete aux;
}