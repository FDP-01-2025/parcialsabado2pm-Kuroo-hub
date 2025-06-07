#include <iostream>

using namespace std;

int main()
{
    float num1, num2;

    cout<<"Escriba el primer numero: "<<endl;
    
    if(!(cin >> num1))
    {
        cout<<"Escribe un numero"<<endl;
        return 1;
    }
    
    cout<<"Escriba el segundo numero: "<<endl;
    
     if(!(cin >> num2))
    {
        cout<<"Escribe un numero"<<endl;
        return 1;
    }

    if(num1 > num2)
    {
        cout<<"El numero "<<num1<<" es mayor al "<<num2<<endl;
    }else if(num2 > num1)
    {
        cout<<"El numero "<<num2<<" es mayor al "<<num1<<endl;
    }else if(num1 == num2)
    {
        cout<<"El numero "<<num1<<" es igual al "<<num2<<endl;
    }

    return 0;
}