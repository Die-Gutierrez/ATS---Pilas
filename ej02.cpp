/*Ejercicio 2: Hacer un programa en C++, utilizando Pilas que contenga el siguiente menu: 
1. Insertar un caracter a la pila
2. Mostrar todos los elementos de la pila
3. Salir
*/
#include <iostream>
#include <cstdlib>
#include <string.h>

struct Nodo
{
    char carac[2];
    Nodo *siguiente;
};

void agregarPila(Nodo *&, char []);

using namespace std;

int main()
{
    int op;
    Nodo *pila = NULL;
    char letra[2];

    do
    {
        cout<<"BIENVENIDO"<<endl;
        cout<<"Menu"<<endl;
        cout<<"1. Insertar un caracter a la pila"<<endl;
        cout<<"2. Mostrar todos los elementos de la pila"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Elija su opcion: ";
        cin>>op;
        switch (op)
        {
        case 1:
            cout<<"Inserte UN SOLO caracter: ";
            fflush(stdin); cin.getline(letra,2,'\n');
            agregarPila(pila, letra);
            break;
        case 2:
            
            break;
        case 3:
            cout<<"\nGracias por vuestra preferencia"<<endl;
            break;
        default:
            cout<<"Elija una opcion del Menu . . ."<<endl;
            break;
        }
    } while (op != 3);
    
    return 0;
}
void agregarPila(Nodo *&pila, char letra[])
{
    Nodo *nuevo_nodo = new Nodo ();
    strcpy(nuevo_nodo->carac, letra);
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout<<"El caracter '"<<nuevo_nodo->carac<<"' fue agregado exitosamente . . ."<<endl<<endl;
}