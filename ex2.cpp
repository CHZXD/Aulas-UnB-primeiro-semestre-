#include <iostream>

using namespace std; 

int main() {
    cout << "Digite uma palavra: ";
    string palavra;
    cin >> palavra;

    int contavogais = 0;
    int i = 0;

    while (i < palavra.length()) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            contavogais++;
        }
        i++;
    }

    cout << "A palavra tem " << contavogais << " vogal(is)." << endl;

    return 0;
}