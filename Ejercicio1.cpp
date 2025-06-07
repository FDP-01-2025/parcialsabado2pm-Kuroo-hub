#include <iostream>

using namespace std;

int main()
{
    int numero = 12;
    int eleccion;

    do
    {
       cout<<"Escribe un numero del 1 al 100"<<endl;
       cin >> eleccion;
       
       if(eleccion < 0 || eleccion > 100 )
       {
           cout<<"Tiene que ser un numero mayor de 0 y menor de 100"<<endl;
       }else if(eleccion < numero)
       {
           cout<<"El numero es mayor"<<endl;
       }else if(eleccion > numero)
       {
           cout<<"El numero es menor"<<endl;
       }

    }while(eleccion != numero);
    cout<<"Felicidades adivinaste el numero y es: "<<numero<<endl;
    return 0;
}