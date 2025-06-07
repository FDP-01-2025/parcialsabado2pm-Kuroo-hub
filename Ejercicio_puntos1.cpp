#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int carnet, eleccion, devol;
    string usuario, libro;
    //Se define la variable del vector
    vector<string>libros;

    cout<<"Escriba su usuario: "<<endl;
    cin >> usuario;
    cout<<"Escriba su carnet: "<<endl;
    cin >> carnet;

    do
   {
     cout<<"Bienvenido Estudiante, este es el menu:"<<endl;
     cout<<"1. Prestar libro"<<endl;
     cout<<"2. Devolver libro"<<endl;
     cout<<"3. Salir"<<endl;
      cout<<"Seleccione la opcion que desea:"<<endl;
     cin >> eleccion;

     switch(eleccion)
    {
        case 1:
        cout<<"Seleccione el libro que desea pedir prestado"<<endl;  
        cin >> libro;
        //Se usa la funcion para que la variable libro se almacene en el vector
       libros.push_back(libro);
         
          break;
        case 2:
          if(libros.empty())
          {
            cout<<"Primero debe haber libros prestados"<<endl;
           
          }else
          {
            for(int i=0; i<libros.size(); i++)
            {
              cout<<i + 1<<". "<<libros[i]<<endl;
              
            }
          }
          
           
          break;
        case 3:
         cout<<"Hola"<<endl;
          break;
        default:
        cout<<"Hola"<<endl;
    }


   }while(eleccion != 3);
   cout<<"Gracias, vuelve pronto!"<<endl;
   return 0;
}