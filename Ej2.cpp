
/*Escribe un programa en C++ que calcule el factorial de un número entero positivo
usando un bucle.
*/

#include <iostream>
using namespace std;

unsigned long long fact (int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main() {
    cout << "Ejercicio 2" << endl;
    int n;

    cout << "Ingrese un numero" << endl;
    cin >> n;

    cout << "El factorial de " << n << " es: " << fact(n);

    return 0;
}
