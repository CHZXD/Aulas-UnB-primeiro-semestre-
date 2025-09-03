#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    cout << "Bem vindo ao jogo da mega do Caio \n";
    cout << "Tente acertar o número secreto! \n";

    srand(time(0));
    int numerosecreto = rand() % 10+ 1;
    int palpite1, palpite2, palpite3, palpite4, palpite5, palpite6;
    int acertos = 0;

    cout << "Digite 6 números entre 1 e 10: \n";

    
    cout << "Palpite 1: ";
    cin >> palpite1;

    cout << "Palpite 2: ";
    cin >> palpite2;

    cout << "Palpite 3: ";
    cin >> palpite3;

    cout << "Palpite 4: ";
    cin >> palpite4;

    cout << "Palpite 5: ";
    cin >> palpite5;

    cout << "Palpite 6: ";
    cin >> palpite6;

    if (palpite1 == numerosecreto) {
        acertos++;
    }
    if (palpite2 == numerosecreto) {
        acertos++;
    }
    if (palpite3 == numerosecreto) {
        acertos++;
    }
    if (palpite4 == numerosecreto) {
        acertos++;
    }
    if (palpite5 == numerosecreto) {
        acertos++;
    }
    if (palpite6 == numerosecreto) {
        acertos++;
    }

    // Exibe o resultado
    if (acertos > 0) {
        cout << "Parabéns! Você acertou o número secreto (" << numerosecreto << ")!\n";
    } else {
        cout << "Que pena! Você não acertou. O número secreto era " << numerosecreto << ".\n";
    }

    return 0;
}