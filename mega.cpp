//Programa da Mega Sena
//09.03.2025
#include <iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;
int main() {
    cout << "Bem vindo ao sorteio da Mega Sena!\n";
    cout << "Serao sorteados 6 numeros entre 1 e 60.\n";
    srand(time(0));
    //Sorteando os 6 numeros
    int numero1, numero2, numero3, numero4, numero5, numero6;
    numero1 = rand() % 60 + 1;  
    numero2 = rand() % 60 + 1;  
    numero3 = rand() % 60 + 1;  
    numero4 = rand() % 60 + 1;
    numero5 = rand() % 60 + 1;
    numero6 = rand() % 60 + 1;
    int digita1, digita2, digita3, digita4, digita5, digita6, digita7, digita8, digita9, digita10;
    cout << "Digite seu 1 numero: ";
    cin >> digita1;
    cout << "Digite seu 2 numero: ";
    cin >> digita2;
    cout << "Digite seu 3 numero: ";
    cin >> digita3;
    cout << "Digite seu 4 numero: ";
    cin >> digita4;
    cout << "Digite seu 5 numero: ";
    cin >> digita5;
    cout << "Digite seu 6 numero: ";
    cin >> digita6;
    cout << "Digite seu 7 numero: ";
    cin >> digita7;
    cout << "Digite seu 8 numero: ";
    cin >> digita8;
    cout << "Digite seu 9 numero: ";
    cin >> digita9;
    cout << "Digite seu 10 numero: ";
    cin >> digita10;
    //Verificando numero1
    int acerta = 0;
    if (digita1==numero1 || digita1==numero2 || digita1==numero3 || digita1==numero4 || digita1==numero5 || digita1==numero6){
        cout << "O numero " << digita1 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    }   
    if (digita2==numero1 || digita2==numero2 || digita2==numero3 || digita2==numero4 || digita2==numero5 || digita2==numero6){
        cout << "O numero " << digita2 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita3==numero1 || digita3==numero2 || digita3==numero3 || digita3==numero4 || digita3==numero5 || digita3==numero6){
        cout << "O numero " << digita3 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita4==numero1 || digita4==numero2 || digita4==numero3 || digita4==numero4 || digita4==numero5 || digita4==numero6){
        cout << "O numero " << digita1 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita5==numero1 || digita5==numero2 || digita5==numero3 || digita5==numero4 || digita5==numero5 || digita5==numero6){
        cout << "O numero " << digita5 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita6==numero1 || digita6==numero2 || digita6==numero3 || digita6==numero4 || digita6==numero5 || digita6==numero6){
        cout << "O numero " << digita6 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita7==numero1 || digita7==numero2 || digita7==numero3 || digita7==numero4 || digita7==numero5 || digita7==numero6){
        cout << "O numero " << digita7 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita8==numero1 || digita8==numero2 || digita8==numero3 || digita8==numero4 || digita8==numero5 || digita8==numero6){
        cout << "O numero " << digita8 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita9==numero1 || digita9==numero2 || digita9==numero3 || digita9==numero4 || digita9==numero5 || digita9==numero6){
        cout << "O numero " << digita9 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita10==numero1 || digita10==numero2 || digita10==numero3 || digita10==numero4 || digita10==numero5 || digita10==numero6){
        cout << "O numero " << digita10 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (acerta==4)
       cout << "Parabens! Voce fez cocô!\n";
    if (acerta==5) 
         cout << "Parabens! Voce fez quina!\n";
    if (acerta==6)
        cout <<  "Parabens! Voce fez sena!\n";
    if (acerta < 4) 
       cout << "Que pena voce somente acertou " << acerta << " numero(s)\n";
    cout << "Os numeros sorteados foram: " << numero1 << ", " << numero2 << ", " << numero3 << ", " << numero4 << ", " << numero5 << " e " << numero6 << ".\n";
    return 0;
}                 