#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    bool ehPalindromo = true;
    int n = palavra.length();

    for (int i = 0; i < n / 2; i++) {
        if (palavra[i] != palavra[n - i - 1]) {
            ehPalindromo = false;
            break;
        }
    }

    if (ehPalindromo)
        cout << "É um palíndromo!" << endl;
    else
        cout << "Não é um palíndromo." << endl;

    return 0;
}
