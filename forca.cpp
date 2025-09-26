#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Bem vindo ao jogo da Forca!\n";
    cout << "Jogador 1, digite a palavra secreta: ";
    string palavra;
    cin >> palavra;

    system("cls"); 

    string palavraAdivinhada(palavra.length(), '_');
    int tentativas = 6;

    cout << "Jogador 2, tente adivinhar a palavra!\n";

    while (true){
        cout << "digite uma letra: ";
        char letra;
        cin >> letra;
        letra tolower(letra);
        bool tem = false;

  for (int i = 0; i < palavra.length(); i++) {
       letra==palavra [i];
        if (letra == palavra[i]) {
            cout << "A letra "<< letra << " esta na posição!"<<i<< endl;
            tem = true;
        
            for

    }
    }
    return 0;}}
