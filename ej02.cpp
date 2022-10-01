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
void quitarPila(Nodo *&pila, char letra[]);

using namespace std;

int main()
{
    int op;
    Nodo *pila = NULL;
    char letra[2];

    do
    {
        system("cls");
        cout<<"\n\t\tM-E-N-U"<<endl;
        cout<<"*******************************************"<<endl;
        cout<<"1. Insertar un caracter a la pila"<<endl;
        cout<<"2. Mostrar todos los elementos de la pila"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"*******************************************"<<endl;
        cout<<"Elija una opcion: ";
        cin>>op;
        switch (op)
        {
        case 1:
            system("cls");
            cout<<"\tLEA ATENTAMENTE . . ."<<endl<<endl;
            cout<<"*******************************************"<<endl;
            cout<<"Inserte UN SOLO caracter: ";
            fflush(stdin); cin.getline(letra,2,'\n');
            agregarPila(pila, letra);
            cout<<"*******************************************"<<endl;
            system("pause");
            break;
        case 2:
            system("Pause");
            system("cls");
            cout<<"Todos los elementos de la pila son: ";
            while(pila != NULL)
            {
                quitarPila(pila, letra);
                if(pila != NULL)
                {
                    cout<<letra<<", ";
                }
                else
                {
                    cout<<letra<<". ";
                }
            }
            cout<<endl<<endl;
            system("pause");
            break;
        case 3:
            system("cls");
            cout<<"\n\n\n*** Gracias por vuestra preferencia ***"<<endl<<endl<<endl;
            system("pause");
            system("cls");
            break;
        default:
            system("cls");
            cout<<"\n\nElija una opcion del Menu . . .\n\n"<<endl;
            system("pause");
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
    cout<<"\nEl caracter '"<<nuevo_nodo->carac<<"' fue agregado exitosamente . . ."<<endl<<endl;
}
void quitarPila(Nodo *&pila, char letra[])
{
    Nodo *aux = pila;
    strcpy(letra, aux->carac);
    pila = aux->siguiente;
    delete aux; 
}