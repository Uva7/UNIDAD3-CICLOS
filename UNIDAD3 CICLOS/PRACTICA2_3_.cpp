#include <iostream>
using namespace std;

int main()
{       int i=1;
        float num, Total=0.0;
        char choose= '1';
    //Mensaje se Bienvenida 
    
        cout << "Este programa suma los numero capturados  " << "\n";
        
        while (choose == '1')
        
            {
            //Se pide el primer numero
            cout << "Por favor ingrese el numero:  ";
            //Se asigna el valor a num
            cin >> num;
            
            Total=Total+num;
            cout<<" Para continuar capturando mas datos 1, para terminar 0   "<<endl;
            cin>>choose;
			}
    cout<<" La suma de los numeros es"<<Total<<endl;
    return 0;
}
