 # include <iostream> 
 # include <cmath>
using namespace std;

int main () {
    float r, pi= 3.141516;
    int area;

    cout << "bienvenido a calculadora de radio " <<endl;
    cout << "por favor, podria ingresar el valor del radio" << endl;
    cin >> r; 
area = pi * (pow(r ,2));
cout << area << endl;

if (area % 2 == 0)
{
    cout<< "el area calculada es: " << area << "por lo tanto es par "<< endl;
}
return 0;
} 
