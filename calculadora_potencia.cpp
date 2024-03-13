#include <iostream>
#include <cmath> // incluida para usar a função pow

using namespace std;

int main() {
    int base, expoente;
    double resultado;

    cout << "Digite a base da potencia: ";
    cin >> base;

    cout << "Digite o expoente da potencia: ";
    cin >> expoente;

    // calculando a potência usando o pow
    resultado = pow(base, expoente);

    cout << "O resultado de " << base << "^" << expoente << " e: " << resultado << endl;

    return 0;
}
