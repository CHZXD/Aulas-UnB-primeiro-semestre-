#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita o número ao usuário
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Verifica se é par ou ímpar
    if (numero % 2 == 0) {
        cout << "O número " << numero << " é PAR." << endl;
    } else {
        cout << "O número " << numero << " é ÍMPAR." << endl;
    }

    return 0;
}
