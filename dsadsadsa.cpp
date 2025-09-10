#include <iostream>
using namespace std;

int vezes2(int n) {
    return n * 2;
}

int main() {
    int numero = 0;

    cin >> numero;
    if (numero != 10) {
        numero = vezes2(numero);
    }
    else {
        numero = 0;
    }
    cout << numero << endl;

    return 0;
}