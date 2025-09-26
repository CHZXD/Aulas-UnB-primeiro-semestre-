#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "Digite um número: ";
    cin >> n;
    int total = 0;

    for (int i = 1; i < n; i++) {
        total = total + i;
    }

    int triangular = 0;
    for (int i = 1; triangular <= n; i++) {
        triangular = i * (i + 1) / 2; 
        if (triangular == n) {
            cout << n << " é um número triangular." << endl;
            return 0;
        }
    }

    cout << n << " não é um número triangular." << endl;

    return 0;
}