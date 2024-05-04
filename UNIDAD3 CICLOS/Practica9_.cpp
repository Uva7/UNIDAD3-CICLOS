#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   float num;
   float factorial = 1;
   //Se pide el numero del factorial a calcular
   cout << "Por favor ingrese numero a calcular:   ";
   //Vamos a fijar solo por decimales para los calculos
   cout << setprecision(2);
   cout << fixed;
   
   //Se asigna el numero a num
   cin >> num;
   
   for (
   int  i = 1; i <= num; i++) {
   	  factorial *= i;
   }
   
   cout << "El factorial de "<<num<<"  es  "<<factorial << "\n";
   return 0;
}
