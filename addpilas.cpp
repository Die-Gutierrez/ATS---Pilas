#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarDatos(Nodo *&, int);

int main()
{
    Nodo *pila = NULL;
    int num;

    for(int i=0;i<3;i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>num;
        agregarDatos(pila, num);
    }
    cout<<"\nEl ultimo numero es: "<<pila->siguiente->siguiente->dato<<endl;

    return 0;
}
void agregarDatos(Nodo *&pila, int num)
{
    Nodo *nuevo_nodo = new Nodo ();
    nuevo_nodo->dato = num;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout<<"Elemento "<<num<<" agregado exitosamente . . ."<<endl<<endl;
}