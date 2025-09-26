#include <iostream>
using namespace std;

int main() {
    cout << "Feliz Natal! Digite um número:";
    int altura;
    cin >> altura;
    for (int i = 1; i <= altura; i++) {

        for (int c= 1; c<= altura - i; c++) {
            cout << " ";
        }
        
        for (int d = 1; d <= (2 * i - 1); d++) {
            cout << "*";
        }
        cout << endl; 
    }
}
    