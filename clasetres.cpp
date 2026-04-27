 # include <iostream> 
 # include <cmath>
using namespace std;

int main () {
    int y, x;
    cout <<"Please insert the number: " << endl;
    cin >> y;

      x = pow(y, y);
   cout << "El valor de x es: " <<endl;
    if (x % 2 == 0)
{
    cout << "the number: " << x << " is even." <<endl;
}

{
else 
cout << "the number: "  << "is odd" << endl;
}
    return 0;
}