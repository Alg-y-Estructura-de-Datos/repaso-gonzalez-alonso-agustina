
/*Ej1: Imagina que tienes dos vasos, uno con jugo de naranja y otro con jugo de manzana.
Queremos escribir un programa en C++ que tenga una función llamada
intercambiarJugos que tome dos vasos (representados como variables) y los
intercambie. Luego, en la función main, pedimos al usuario que ingrese la cantidad
de jugo en cada vaso, llamamos a la función intercambiarJugos y mostramos las
cantidades después del intercambio.
*/

#include <iostream>
using namespace std;

void intercambiarJugos (double &vaso1, double &vaso2) {
double aux;
  aux=vaso1;
  vaso1=vaso2;
  vaso2=aux;

}

int main() {
    cout << "Ejercicio 1: " << endl;

    double vaso1, vaso2;

    cout << "Ingrese la cantidad de jugo en el vaso 1" << endl;
    cin >> vaso1;

    cout << "Ingrese la cantidad de jugo en el vaso 2" << endl;
    cin >> vaso2;

    intercambiarJugos(vaso1,vaso2);
    cout << "vaso 1: " << vaso1 << endl;
    cout << "vaso 2: " << vaso2 << endl;

    return 0;
}
