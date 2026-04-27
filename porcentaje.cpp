# include <iostream>
using namespace std;

int main() {
double numero1, numero2, numero3, suma, porcentaje1, porcentaje2, porcentaje3;

cout <<"Ingrese el primer numero: " <<endl;
cin >> numero1;
cout <<"Ingrese el segundo numero: " <<endl;
cin >> numero2;
cout <<"Ingrese el tercer numero: " <<endl;
cin >> numero3;

suma= numero1 + numero2 + numero3;

porcentaje1= (numero1 / suma) * 100;
porcentaje2= (numero2 / suma) * 100;
porcentaje3= (numero3 / suma) * 100;
cout <<"porcentaje 1: %" << porcentaje1 << endl;
cout <<"porcentaje 2: %" << porcentaje2 << endl;
cout <<"porcentaje 3: %" << porcentaje3 << endl;

return 0;

}