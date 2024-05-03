#include <iostream>
using namespace std;

string converterEmBinario(int n){
    string resultado = "";

    for(int i = n; i > 0; i /= 2) {
        if(i % 2 == 0) {
            resultado = "0" + resultado;
        }
        else {
            resultado = "1" + resultado;
        }
    }

    return resultado;
}

int main(){
    int numero;

    cout << "Insira um numero inteiro: ";
    cin >> numero;

    cout << "O numero " << numero << " em binario e igual a: " << converterEmBinario(numero);
}