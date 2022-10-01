#include <iostream>
#include <stack>

using namespace std;

stack <int> pila; // Se declara en tipo de datos que tendra nuestra PILA de nombre "pila".

int main()
{
    int nElementos, num;

    cout<<"Digite el numero de elementos de nuestra pila: ";
    cin>>nElementos;
    for(int i=0;i<nElementos;i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>num;
        pila.push(num); // En esta funcion enviamos mediante una variable un valor que vamos eligiendo.
    }
    cout<<"\nMostrando elementos de la pila: "<<endl;
    while(pila.size() > 0) // Esta funcion nos muestra el tamaño de la pila.
    {
        if(pila.size() > 1)
        {
            cout<<pila.top()<<", "; // Mediante esta funcion invocamos al elemento que esta en la cima de la pila.
        }
        else
        {
            cout<<pila.top()<<".";
        }
        pila.pop(); // Mediante esta funcion, borramos el elemento que esta en la cima de la pila.
    }


    return 0;
}
// En una funcion solo se le envia variables como argumentos, si quieres enviar numeros o lo que sea,
// tiene que ser atraves de una variable.