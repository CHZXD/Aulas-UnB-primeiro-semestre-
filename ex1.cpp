#include <iostream>
using namespace std;

int main(){
    cout << "Digite uma palavra ";
    string palavra;
    cin >> palavra;
if (palavra.length()!=5) {
    cout << "Palavra invalida" << endl;
    return 0;
}
int conta=0;
if (palavra[0]=='a' || palavra[0]=='e' || palavra[0]=='i' || palavra[0]=='o' || palavra[0]=='u'){
    conta=conta+1;//conta as vogais
    cout << "A letra"<<palavra[0]<<" e uma vogal\n";
}
if (palavra[1]=='a' || palavra[1]=='e' || palavra[1]=='i' || palavra[1]=='o' || palavra[1]=='u'){
    conta=conta+1;//conta as vogais
    cout << "A letra"<<palavra[1]<<" e uma vogal\n";
}
if (palavra[2]=='a' || palavra[2]=='e' || palavra[2]=='i' || palavra[2]=='o' || palavra[2]=='u'){
    conta=conta+1;//conta as vogais
    cout << "A letra"<<palavra[2]<<" e uma vogal\n";
}
if (palavra[3]=='a' || palavra[3]=='e' || palavra[3]=='i' || palavra[3]=='o' || palavra[3]=='u'){
    conta=conta+1;//conta as vogais
    cout << "A letra"<<palavra[3]<<" e uma vogal\n";
}
if (palavra[4]=='a' || palavra[4]=='e' || palavra[4]=='i' || palavra[4]=='o' || palavra[4]=='u'){
    conta=conta+1;//conta as vogais
    cout << "A letra"<<palavra[4]<<" e uma vogal\n";
}
cout << "A palavra tem "<<conta<<" vogais\n";
return 0;
}