 # include <iostream> 
using namespace std;

int main () {
    int temperatura;

    cout << "¿Como esta el agua?" <<endl;
    cout << "ingrese la temperatura en grados celsius: " <<endl;
    cin >> temperatura;
    if (temperatura < 0) {
        cout << "El agua esta helada " <<endl;
     } else if (temperatura >= 0 &&  temperatura <= 15) {
        cout << "El agua esta templada" <<endl;
     } else {
    cout << "el agua esta caliente " <<endl;
     }
    return 0;
}