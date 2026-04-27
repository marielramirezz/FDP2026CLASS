# include <iostream>
using namespace std;

int main () {
   int numero1, numero2, resultado1, resultado2;
   string nombre;
    cout << "ingrese su nombre: " <<endl;
    cin >> nombre;
    cout << "ingrese el primer numero: " <<endl;
    cin >>numero1;
    cout << "ingrese el segundo numero: " <<endl;
    cin >>numero2;
    resultado1= numero1 * 5;
    resultado2= numero2 * 6;
    cout << "Hola mi nombre es " << nombre
     << ", el primer resultado es " << resultado1
     << " y el segundo es " << resultado2
     << endl;
     return 0;
}