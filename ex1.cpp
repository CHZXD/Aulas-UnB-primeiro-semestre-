#include <iostream>
using namespace std;

int main() {
    cout << "Digite uma palavra: ";
    string palavra;
    cin >> palavra;

    int conta = 0; 
    for (i=0; i < palavra.length(); i++) {

        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            conta++;
        }
     
    }

    // Exibe o resultado
    cout << "A palavra tem " << conta << " vogais\n";

    return 0;
}