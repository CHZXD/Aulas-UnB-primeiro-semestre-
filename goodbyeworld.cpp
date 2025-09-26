//Este es un programa en C++ que imprime "Goodbye, World!" en la consola.
//data

// using namespace std; - sempre acima do int main - serve p n ficar dando std::cout
// g++ goodbyeworld.cpp -o goodbyeworld -- cria o executável goodbyeworld
#include <iostream>
#include <cstdlib> // Necessário para a função system

int main() {
    
    std::cout << "Goodbye, World!\n";

    system("color 0A"); // Muda a cor do texto para verde no Windows
    system("cls"); // Limpa a tela no Windows
    system("pause");
    return 0;
}